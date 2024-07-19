#include <iostream>
#include <vector>
#include <string>

bool issame(std::string str1, std::string str2) {
    return str1 == str2;
}

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    // Main function implementation
    return 0;
}