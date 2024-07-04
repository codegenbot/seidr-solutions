#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> words_string(const string& s) {
    vector<string> result;
    string word;
    bool in_word = false;
    for (char c : s) {
        if (isalnum(c) || c == '_') {
            word += c;
            in_word = true;
        } else {
            if (in_word) {
                result.push_back(word);
                word.clear();
                in_word = false;
            }
        }
    }
    if (in_word)
        result.push_back(word);
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(words_string("ahmed    ,    gamal"), {"ahmed", "gamal"}));
    return 0;
}