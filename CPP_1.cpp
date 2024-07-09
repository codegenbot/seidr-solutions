```cpp
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> result;
    std::string group;

    for (char c : s) {
        if (c == '(') {
            group += c;
        } else if (c == ')') {
            group += c;
            result.push_back(group);
            group.clear();
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::vector<std::string> output = separate_paren_groups(input);

    for (const auto& str : output) {
        std::cout << str << std::endl;
    }

    return 0;
}