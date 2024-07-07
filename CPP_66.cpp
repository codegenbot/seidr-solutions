#include <iostream>
#include <string>

int digitSum(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 14);
    std::cout << "digitSum: " << digitSum("You arE Very Smart") << std::endl;
    return 0;
}