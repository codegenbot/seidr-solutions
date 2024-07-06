#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool in_word = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!in_word) {
                in_word = true;
                word += tolower(c);
            } else {
                word += tolower(c);
            }
        } else {
            if (in_word) {
                in_word = false;
                int consonants = 0;

                for (char w : word) {
                    if (!ispunct(w) && !isspace(w) && w != 'a' && w != 'e' && w != 'i' && w != 'o' && w != 'u') {
                        consonants++;
                    }
                }

                if (consonants == n) {
                    result.push_back(word);
                }

                word = "";
            }
        }
    }

    return result;
}