#include <algorithm>
#include <string>
#include <cctype>
#include <iostream>

std::string solve(std::string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if (s.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}

#include <iostream>