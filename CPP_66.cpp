#include <iostream>
#include <string>
#include <cctype>

int digitSum(std::string s) {
    if (s.empty()) {
        return -1;
    }
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += static_cast<int>(c) - 55; 
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    // Your code here
}