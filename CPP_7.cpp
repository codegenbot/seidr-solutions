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
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings;
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, s);
        strings.push_back(s);
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    if(filtered_strings.size() == 0) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        for(const auto& str : filtered_strings) {
            std::cout << str << std::endl;
        }
    }

    return 0;
}