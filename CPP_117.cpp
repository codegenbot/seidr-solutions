#include <sstream>
#include <cctype>

vector<string> select_words(string s, int n) {
    vector<string> result;
    istringstream stream(s);
    string word;
    while (stream >> word) {
        int consonant_count = 0;
        for (char c : word) {
            if (isalpha(c) && !strchr("AEIOUaeiou", c)) {
                consonant_count++;
            }
        }
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    return result;
}