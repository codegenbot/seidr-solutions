```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "apricot"};
    std::string substring = "app";
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    // Print the filtered strings
    for (const auto& str : filtered_strings) {
        std::cout << str << std::endl;
    }

    return 0;
}