```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size())
        return false;
    
    for (int i = 0; i < vec1.size(); i++) {
        if (std::string(vec1[i]) == "" || std::string(vec2[i]) == "") {
            if ((vec1[i] != vec2[i]))
                return false;
        } else {
            if (std::transform(vec1.begin(), vec1.end(), vec2.begin(),
                               [](const auto& a, const auto& b) {
                                   return a == b;
                               }).all())
                return true;
            else
                return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<std::string> words_string;
    std::cout << "Enter words (space separated): ";
    std::string input;
    getline(std::cin, input);
    std::istringstream iss(input);
    for (std::string s; iss >> s;) {
        words_string.push_back(s);
    }
    
    assert(issame(words_string, words_string));
}