```
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
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
    std::vector<std::string> vec1 = {"hello", "world", "cpp", "java"};
    std::vector<std::string> vec2 = {"hello", "world", "cpp", "python"};

    if (isSame(vec1, vec2)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::cout << "Vectors are not same." << std::endl;
    }

    std::vector<std::string> filtered = filter_by_substring(vec1, "cpp");
    for (const auto& str : filtered) {
        std::cout << str << std::endl;
    }
    return 0;
}