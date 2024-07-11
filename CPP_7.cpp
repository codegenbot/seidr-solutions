#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main() {
    // Example usage of the filter_by_substring function
    std::vector<std::string> strings = {"apple", "banana", "cherry", "orange"};
    std::vector<std::string> filtered = filter_by_substring(strings, "an");

    for (const auto& str : filtered) {
        std::cout << str << std::endl;
    }

    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}