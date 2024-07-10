```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<char> all_prefixes(const std::string& input) {
    std::vector<char> result;
    for (int i = 0; i <= input.size(); ++i) {
        result.push_back(input[i]);
    }
    return {std::string(&result[0], &result[0] + result.size())};
}

int mainFunc() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<char> result = all_prefixes(input);
        if (!issame({{""}}, {std::vector<std::string>(result.begin(), result.end())})) {
            std::cout << "The prefixes are not the same." << std::endl;
        } else {
            std::cout << "The prefixes are the same." << std::endl;
        }
    }

    std::vector<char> www = all_prefixes("WWW");
    if (!issame({{""}}, {std::vector<std::string>(www.begin(), www.end())})) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}