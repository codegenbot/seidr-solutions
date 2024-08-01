#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (const auto& s : v1) {
        if (std::find(v2.begin(), v2.end(), s) == v2.end()) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> str1 = {"apple", "banana", "cherry"};
    std::vector<std::string> str2 = {"banana", "orange", "grape"};

    if (issame(filter_by_substring(str1, "ana"), filter_by_substring(str2, "ana"))) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are different." << std::endl;
    }

    return 0;
}