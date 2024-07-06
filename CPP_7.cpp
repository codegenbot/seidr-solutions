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

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> vec1 = {"apple", "banana", "cherry"};
    std::vector<std::string> vec2 = {"apple", "banana", "cherry"};

    if (isSame(vec1, vec2)) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    return 0;
}