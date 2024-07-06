#include <string>
#include <cctype>
#include <iostream>

int count_upper(std::string s) {
    int count = 0;
    for (char c : s) {
        if (std::isupper(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << count_upper("ABCDE") << std::endl;
    return 0;
}