#include <string>
#include <cassert>
#include <iostream>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (!isdigit(c)) {
            sum += static_cast<int>(c) - 'A' + 1; 
        } else {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    cout << digitSum("Your string here"); 
    return 0;
}