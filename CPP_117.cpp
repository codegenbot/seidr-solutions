#include <cassert>
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (isalpha(c)) {
            word += tolower(c);
        } else if (!word.empty()) {
            bool has_n_consonants = count(word.begin(), word.end(), 'b') + 
                                    count(word.begin(), word.end(), 'c') + 
                                    count(word.begin(), word.end(), 'd') + 
                                    count(word.begin(), word.end(), 'f') + 
                                    count(word.begin(), word.end(), 'g') + 
                                    count(word.begin(), word.end(), 'h') + 
                                    count(word.begin(), word.end(), 'j') + 
                                    count(word.begin(), word.end(), 'k') + 
                                    count(word.begin(), word.end(), 'l') + 
                                    count(word.begin(), word.end(), 'm') + 
                                    count(word.begin(), word.end(), 'n') + 
                                    count(word.begin(), word.end(), 'p') + 
                                    count(word.begin(), word.end(), 'q') + 
                                    count(word.begin(), word.end(), 'r') + 
                                    count(word.begin(), word.end(), 's') + 
                                    count(word.begin(), word.end(), 't') + 
                                    count(word.begin(), word.end(), 'v') + 
                                    count(word.begin(), word.end(), 'w') + 
                                    count(word.begin(), word.end(), 'x') + 
                                    count(word.begin(), word.end(), 'y') + 
                                    count(word.begin(), word.end(), 'z') == n {
                result.push_back(word);
            }
            word = "";
        }
    }
    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}