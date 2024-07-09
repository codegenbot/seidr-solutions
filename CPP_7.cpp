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

int main() {
    std::vector<std::string> vec1, vec2;
    
    // Input strings
    for (std::string s; std::cin >> s; ) {
        vec1.push_back(s);
    }

    std::cout << "Enter the substring: ";
    std::string subStr;
    std::cin >> subStr;

    vec2 = filter_by_substring(vec1, subStr);

    // Check if vec1 and vec2 are same
    if (isSame(vec1, vec2)) {
        std::cout << "The filtered vector is the same as the original.\n";
    } else {
        std::cout << "The filtered vector is different from the original.\n";
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}