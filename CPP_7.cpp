#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> vec1 = {"apple", "banana", "cherry"};
    std::vector<std::string> vec2 = {"apple", "orange", "cherry"};
    
    if (isSame(filter_by_substring(vec1, "p"), filter_by_substring(vec2, "p"))) {
        std::cout << "The filtered vectors are the same." << std::endl;
    } else {
        std::cout << "The filtered vectors are different." << std::endl;
    }
    
    return 0;
}