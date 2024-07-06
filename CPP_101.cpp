#include <vector>
#include <string>

bool isSame(vector<std::vector<std::string>> a) {
    if (a.size() != 1) {
        return false;
    }
    std::vector<std::string> vec = a[0];
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != "ahmed" && vec[i] != "gamal") {
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
    assert(isSame({words_string("ahmed     , gamal")}));
}