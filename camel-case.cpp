```cpp
#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> groups = {""};
    for (char c : str) {
        if (c == '-') {
            groups.push_back("");
        } else {
            groups.back() += c;
        }
    }

    std::string result;
    bool capitalize = true;

    for (const auto& group : groups) {
        if (!group.empty()) {
            if (capitalize)
                result += toupper(group[0]);
            else
                result += tolower(group[0]);
            for (int i = 1; i < group.size(); i++) {
                result += tolower(group[i]);
            }
            capitalize = false;
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "Output: " << kebabToCamel(input) << std::endl;

    return 0;
}