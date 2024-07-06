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

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> vec = {"apple", "banana", "orange", "banana"};
    if (isSame(filter_by_substring(vec, "banana"))) 
        std::cout << "The filtered vector is the same." << std::endl;
    else
        std::cout << "The filtered vector is not the same." << std::endl;
    return 0;
}