#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 1; i < s.length(); i += 2) {
        if (std::toupper(s[i]) == 'A' || std::toupper(s[i]) == 'E' || std::toupper(s[i]) == 'I' || std::toupper(s[i]) == 'O' || std::toupper(s[i]) == 'U') {
            count++;
        }
    }
    return count;
}