#include <iostream>
#include <vector>
#include <string>

bool filter_by_substring(const std::string& str1, const std::string& str2, const std::string& substring) {
    return str1.find(substring) != std::string::npos && str2.find(substring) != std::string::npos;
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
    for (auto it = strings.begin(); it != strings.end(); ++it) {
        for (auto it2 = it + 1; it2 != strings.end(); ++it2) {
            if (filter_by_substring(*it, *it2, substring)) {
                result.push_back(*it);
                result.push_back(*it2);
            }
        }
    }
    return result;
}