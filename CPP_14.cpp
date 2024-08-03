#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::vector<std::string> prefixes = all_prefixes(str);

    for (const auto& prefix : prefixes) {
        std::cout << prefix << " ";
    }
    std::cout << "\n";

    return 0;
}