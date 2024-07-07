```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strings;
    std::string input;

    while (std::cin >> input) {
        strings.push_back(input);
    }

    if (!strings.empty()) {
        for (const auto& str : strings) {
            if (str == strings[0]) {
                std::cout << str << " ";
            } else {
                std::cout << strings[0] + str << " ";
            }
        }
    }

    return 0;
}