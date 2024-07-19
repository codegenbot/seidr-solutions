#include <iostream>
#include <cctype>
#include <cassert>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE 2022") == 6);
    return 0;
}