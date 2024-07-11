#include <iostream>
#include <vector>
#include <string>

bool filter_by_substring(const std::string& str1, const std::string& str2) {
    return str1.find(str2) != std::string::npos;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main() {
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
        if (filter_by_substring(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}