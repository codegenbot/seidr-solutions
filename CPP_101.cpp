#include <vector>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || s[i] == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (!word.empty())
        result.push_back(word);
    return result;
}

int main() {
    std::vector<std::string> v = words_string("ahmed     , gamal");
    for (const auto& str : v) {
        std::cout << str << std::endl;
    }
    
    std::vector<std::string> a = {"one", "two"};
    std::vector<std::string> b = {"1", "2"};
    bool same = isSame(a, b);
    if (same)
        std::cout << "The vectors are the same." << std::endl;
    else
        std::cout << "The vectors are not the same." << std::endl;

    return 0;
}