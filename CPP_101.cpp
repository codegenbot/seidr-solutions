```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (std::string(vec[i]) == "")
            return false;
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
    
    assert(issame(words_string));
}