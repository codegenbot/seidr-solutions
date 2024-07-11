#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry", "date"};
    std::vector<std::string> filtered_strings = filter_by_substring(strings, "a");

    std::vector<std::string> expected_result = {"apple", "banana", "date"};
    assert(filtered_strings == expected_result);

    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }

    return 0;
}