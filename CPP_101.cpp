#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    vector<string> b2;
    for (auto s : b) {
        b2.push_back(s);
    }
    return a == b2;
}

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    return 0;
}

vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}