```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            std::string temp = std::string(1, c);
            while(std::next_permutation(std::begin(temp), std::end(temp))) {
                for(char d : temp) {
                    sum += d - 'A' + 1;
                }
            }
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}