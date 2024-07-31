#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool reverse_delete(const std::string& str1, const std::string& str2) {
    if (str1 == str2) return false;
    for (int i = 0; i < str1.size(); ++i) {
        if (std::string(str1.substr(i)).reverse() == str2) return true;
    }
    return false;
}

int main() {
    std::pair<std::string, bool> result = reverse_delete("mamma", "amma");
    if (result.second) {
        std::cout << "True" << std::endl;
    } else {
        if(result.first.empty()) {
            std::cout << "Both strings are the same." << std::endl;
        } else {
            if(result.first == std::string(result.first).reverse()) {
                std::cout << "The first string is a palindrome." << std::endl;
            } else {
                std::cout << "The second string is a reverse of the first string." << std::endl;
            }
        }
    }
    return 0;
}