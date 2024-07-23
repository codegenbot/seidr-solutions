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
    int result = digitSum("Your string here");
    std::cout << "The output is: " << result; 
    return 0;
}