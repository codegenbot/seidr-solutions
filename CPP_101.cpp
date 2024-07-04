#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> words_string(const string& s) {
    vector<string> result;
    string word;
    bool lastWasDelimiter = false;
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
            lastWasDelimiter = true;
        } else {
            word += c;
            lastWasDelimiter = false;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
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
    assert(issame(words_string("one, two , three"), {"one", "two", "three"}));
    assert(issame(words_string(" , leading and trailing , "), {"leading", "and", "trailing"}));
    assert(issame(words_string(",,multiple,,delimiters,"), {"multiple", "delimiters"}));
    return 0;
}