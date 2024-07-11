#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0 && isupper(s[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "ABCDE";
    std::cout << "Number of uppercase characters at even positions: " << count_upper(str) << std::endl;
    return 0;
}