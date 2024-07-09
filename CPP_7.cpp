#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int num_strings;
    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    std::vector<std::string> strings(num_strings);

    for (auto& str : strings) {
        std::cout << "Enter string " << &str << ": ";
        std::getline(std::cin, str);
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    auto filtered_strings = filter_by_substring(strings, substring);

    if (filtered_strings.empty()) {
        std::cout << "No strings contain the substring.\n";
    } else {
        std::cout << "Strings containing the substring:\n";
        for (const auto& str : filtered_strings) {
            std::cout << str << "\n";
        }
    }

    return 0;
}