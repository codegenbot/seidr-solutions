```cpp
#include <iostream>
#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 10);
    return 0;
}