```
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    std::vector<std::string> str_vector;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        str_vector.push_back(str);
    }
    
    std::vector<std::string> substrings;
    std::cout << "Enter the number of substrings: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::string sub;
        std::cout << "Enter substring " << i + 1 << ": ";
        std::getline(std::cin, sub);
        substrings.push_back(sub);
    }
    
    if (!issame(str_vector, filter_by_substring(str_vector, substrings[0]))) {
        for (const auto& str : str_vector) {
            bool found = false;
            for (const auto& sub : substrings) {
                if (str.find(sub) != std::string::npos) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "String: " << str << std::endl;
            }
        }
    } else {
        std::cout << "All strings contain the first substring." << std::endl;
    }
    
    return 0;
}