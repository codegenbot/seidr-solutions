#include <iostream>
#include <string>
#include <cassert>

bool is_happy(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'f') {
            sum += (c - 'a' + 1);
        }
    }
    return sum == 9 || sum == 18 || sum % 19 == 0;
}

bool is_valid(const std::string& s) {
    int result = 0;
    for (char c : s) {
        if (c != 'a' && c != 'b' && c != 'c' && c != 'd' && c != 'e' && c != 'f') {
            result = 1;
            break;
        }
    }
    return result == 0;
}