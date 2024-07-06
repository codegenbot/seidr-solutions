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
            bool has_n_consonants = false;
            for (char consonant : "bcdfghjklmnpqrstvwxyz") {
                size_t pos = 0;
                while ((pos = word.find(consonant)) != string::npos) {
                    word.erase(pos, 1);
                    if (word.size() == n) {
                        has_n_consonants = true;
                        break;
                    }
                }
                if (has_n_consonants) {
                    break;
                }
            }
            if (has_n_consonants) {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}