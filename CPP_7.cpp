#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& strings) {
    if (strings.size() == 0)
        return true;

    for (int i = 1; i < strings.size(); ++i) {
        if (strings[i] != strings[0])
            return false;
    }

    return true;
}

int main() {
    std::vector<std::string> strings;
    std::string substring;

    std::cout << "Enter the list of strings: ";
    for (std::string str; std::cin >> str;) {
        strings.push_back(str);
    }

    std::cout << "Enter a substring to filter by: ";
    std::cin >> substring;

    if (isSame(strings)) {
        std::vector<std::string> filteredStrings = filter_by_substring(strings, substring);
        for (const auto& str : filteredStrings) {
            std::cout << str << "\n";
        }
    } else {
        std::cout << "All strings are not the same.\n";
    }

    return 0;
}