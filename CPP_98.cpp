#include <iostream>
#include <string>

int count_upper(const std::string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << count_upper("EEEE") << std::endl;
    return 0;
}