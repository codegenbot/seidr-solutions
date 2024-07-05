#include <iostream>
#include <string>
#include <cctype>

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
    std::cin >> input;  // Assuming the input is read as a single word
    std::cout << count_upper(input) << std::endl;
    return 0;
}