```
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& vec) {
    if (vec.size() == 0)
        return true;
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] != vec[0])
            return false;
    }
    return true;
}

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

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::cout << "Enter the substring: ";
    std::string substring;
    std::cin >> substring;

    std::vector<std::string> filtered = filter_by_substring(strings, substring);

    if (isSame(filtered))
        std::cout << "All strings contain the given substring." << std::endl;
    else
        std::cout << "Not all strings contain the given substring." << std::endl;

    return 0;
}