#include <iostream>
#include <vector>
#include <string>

bool is_same(const std::vector<std::string>& vec) {
    if (vec.size() == 0)
        return true;
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] != vec[0])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }
    std::cout << "Enter the substring: ";
    std::string substring;
    std::cin >> substring;
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    if (is_same(result)) {
        std::cout << "All strings contain the given substring." << std::endl;
    } else {
        std::cout << "Not all strings contain the given substring." << std::endl;
    }
    return 0;
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