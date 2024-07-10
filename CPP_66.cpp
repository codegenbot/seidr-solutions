```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cassert>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            for(char d : s) {
                sum += d - 'a' + 1;
            }
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    std::cout << digitSum("You arE Very Smart") << std::endl;
    return 0;
}