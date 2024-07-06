```cpp
#include <vector>
#include <string>

bool same(std::vector<std::string> v) {
    for (int i = 0; i < v.size(); i++) {
        if (!issame(v[i])) {
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
    assert(same(words_string("ahmed, gamal")));
}