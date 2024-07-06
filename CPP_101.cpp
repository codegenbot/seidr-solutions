#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) {
        return true;
    }
    std::string b = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != b) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
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

int main() {
    assert(issame(words_string("ahmed     , gamal")));
}