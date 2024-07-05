#include <sstream>
#include <cctype>

vector<string> select_words(string s, int n) {
    vector<string> result;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        int consonant_count = 0;
        for (char c : word) {
            if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}