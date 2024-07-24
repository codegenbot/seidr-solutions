#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && std::isupper(s[i])) &&
            (std::toupper(s[i]) == 'A' || std::toupper(s[i]) == 'E' || 
             std::toupper(s[i]) == 'I' || std::toupper(s[i]) == 'O' || 
             std::toupper(s[i]) == 'U')) {
            count++;
        }
    }
    return count;
}