```
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
            std::string temp = s;
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
    std::cout << "Please enter a string: ";
    std::string s;
    std::cin >> s;
    assert(digitSum(s) == 327);
    return 0;
}