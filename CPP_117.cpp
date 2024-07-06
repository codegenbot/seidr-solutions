#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            int consonants = 0;
            for (char ch : word) {
                if (!ispunct(ch) && !isalnum(ch)) {
                    ++consonants;
                }
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word.clear();
        }
    }
    return result;
}