```
#include <iostream>
#include <cctype>
#include <string>
#include <cassert>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        }
    }
    return sum;

}

std::cout << "digitSum: " << digitSum("You arE Very Smart") << std::endl;
return 0;