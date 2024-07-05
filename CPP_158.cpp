#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string find_max(vector<string> words) {
    auto count_unique = [](const string& s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            if (isalpha(c)) freq[tolower(c) - 'a']++;
        }
        return count_if(freq.begin(), freq.end(), [](int count) { return count > 0; });
    };

    string max_word;
    int max_unique = 0;

    for (const string& word : words) {
        int unique_chars = count_unique(word);
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_unique = unique_chars;
            max_word = word;
        }
    }

    return max_word;
}