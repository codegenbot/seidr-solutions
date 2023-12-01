#include <vector>
#include <cassert>
using namespace std;

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
    string word = "";
    int consonants = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            if (isalpha(s[i])) {
                if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u') {
                    consonants++;
                }
            }
            word += s[i];
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), { "b", "c", "d", "f" }));

    return 0;
}