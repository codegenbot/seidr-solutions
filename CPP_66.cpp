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
            for(int i = 0; i < 26; i++) {
                std::string temp = s;
                do {
                    for(char d : temp) {
                        sum += (d >= 'a' && d <= 'z') ? d - 'a' + 1 : d - 'A' + 1;
                    }
                } while(std::next_permutation(std::begin(temp), std::end(temp)));
            }
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}