#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& strings) {
    if (strings.size() == 0) {
        return true;
    }
    for (int i = 1; i < strings.size(); i++) {
        if (strings[i] != strings[0]) {
            return false;
        }
    }
    return true;
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

int main() {
    std::vector<std::string> strings = {"apple", "banana", "orange"};
    std::string substring = "an";
    
    std::cout << "Original vector: ";
    for (const auto& str : strings) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);
    std::cout << "Filtered vector: ";
    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }
    std::cout << "\n";

    if(isSame(filtered_strings)) {
        std::cout << "All strings in the filtered vector are the same.\n";
    } else {
        std::cout << "Strings in the filtered vector are not all the same.\n";
    }

    return 0;
}