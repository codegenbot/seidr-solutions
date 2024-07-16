#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> filtered_strings;
    for (const std::string& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    // Test the filter_by_substring function
    std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
    std::string substring = "an";
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    for (const std::string& str : filtered_strings) {
        std::cout << str << std::endl;
    }

    return 0;
}