#include <string>
#include <cassert>
#include <iostream>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (!std::isalnum(c)) continue; 
        sum += std::toupper(c) - 'A' + 1; 
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    cout << digitSum("Your string here");
    return 0;
}