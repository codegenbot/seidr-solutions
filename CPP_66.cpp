```
#include <iostream>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
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