#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i]) return false;
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
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
    for (auto& s : strings) {
        std::cout << "Enter string " << &s << ": ";
        std::cin >> s;
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    std::vector<std::string> filtered = filter_by_substring(strings, substring);

    if(filtered.size() == 0) {
        std::cout << "No strings match the given substring." << std::endl;
    } else {
        for(const auto& str : filtered)
            std::cout << str << std::endl;
    }

    return 0;
}