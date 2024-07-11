#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] += 'a';
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    int testCases;
    std::cin >> testCases;
    
    for(int i = 0; i < testCases; i++) {
        std::string str;
        std::cin >> str;
        std::cout << kebabToCamel(str) << std::endl;
    }
    
    return 0;
}