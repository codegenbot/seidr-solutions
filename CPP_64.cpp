```cpp
#include <string>
#include <iostream>

int vowels_count(std::string s) {
    int count = 0;
    for (char c : s) {
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ||
            (c == 'y')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    if(s.empty()) {
        std::cout << "Error: Input string is empty." << std::endl;
    } else {
        int result = vowels_count(s);
        std::cout << "Number of vowels: " << result << std::endl;
    }
    return 0;
}