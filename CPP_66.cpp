#include <string>
#include <cassert>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        } else {
            sum += topperCaseLetterValue(c);
        }
    }
    return sum;
}

int topperCaseLetterValue(char c) {
    return c - 'A' + 1;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    std::cout << digitSum("Your string here") << std::endl;
    return 0;
}