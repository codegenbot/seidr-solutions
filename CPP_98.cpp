#include <string>
#include <cctype>
#include <iostream>

int count_upper(const std::string& s) {
    int count = 0;
    for (size_t i = 0; i < s.length(); i += 2) {
        if (std::isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    int result = count_upper(input);
    std::cout << result << std::endl;
    
    return 0;
}