```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> result;
    for(int i = 0; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<std::string> result = all_prefixes(input);
        if (!issame(result)) {
            std::cout << "The prefixes are not the same." << std::endl;
        } else {
            std::cout << "The prefixes are the same." << std::endl;
        }
    }

    if (!issame(all_prefixes("WWW"))) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}