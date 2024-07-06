#include <string>
#include <cctype>
#include <iostream>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << count_upper("ABCDE") << std::endl;
    return 0;
}