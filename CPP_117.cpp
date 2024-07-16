#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true; 
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int countConsonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (countConsonants == n) {
                result.push_back(word);
            }
            word = "";
            countConsonants = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                countConsonants++;
            }
            word += c;
        }
    }

    if (countConsonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}