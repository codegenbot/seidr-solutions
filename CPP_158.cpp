#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string find_max(vector<string> words) {
    string result = *min_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (auto& word : words) {
        int unique_chars = 0;
        set<char> s(word.begin(), word.end());
        unique_chars = s.size();
        if(unique_chars > result.length()){
            result = word;
        }
    }
    return result;
}

int main() {
    vector<string> words = {"apple", "banana", "cherry"};
    string max_word = find_max(words);
    cout << "The maximum word is: " << max_word << endl;
    return 0;
}