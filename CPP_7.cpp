#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& strings, const std::string& substring) {
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos)
            return true;
    }
    return false;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, const std::string& substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for (auto& str : strings) {
        std::cout << "Enter string " << &str << ": ";
        std::getline(std::cin, str);
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    if (isSame(strings, substring)) {
        std::vector<std::string> filteredStrings = filter_by_substring(strings, substring);
        for (const auto& str : filteredStrings) {
            std::cout << str << "\n";
        }
    } else {
        std::cout << "No strings contain the given substring.\n";
    }

    return 0;
}