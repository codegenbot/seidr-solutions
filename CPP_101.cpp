```cpp
#include <vector>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::vector<std::string> result = words_string(input);
    for (std::string str : result) {
        std::cout << str << std::endl;
    }
}

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