#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; 
        } else if (islower(c)) {
            char temp = std::toupper(c);
            while(temp != 'Z') {
                sum += (temp - 'A' + 1); 
                temp = std::nextperm(temp, 'Z'-'A'+1);
            }
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}