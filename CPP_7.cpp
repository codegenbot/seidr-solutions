#include <iostream>
#include <vector>
#include <string>

bool filter_by_substring(const std::string& str1, const std::string& str2, const std::string& substring) {
    return (str1.find(substring) != std::string::npos) && (str2.find(substring) != std::string::npos);
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry", "orange"};
    bool result = filter_by_substring(strings[0], strings[1], "an");

    std::cout << std::boolalpha << result << std::endl;

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