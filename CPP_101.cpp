#include <vector>
#include <string>

std::vector<std::string> words_string(const std::string& s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ',' || c == ' ') {
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

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;

}

int main() {
    std::vector<std::string> expected = {"ahmed", "gamal"};
    assert(issame(words_string("ahmed     , gamal"), {expected[0], expected[1]}));
    return 0;
}