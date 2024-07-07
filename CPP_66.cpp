#include <iostream>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) { 
        if (isdigit(c)) {
            int temp = c - '0';
            sum += temp;
        }
    }
    return sum;

}

int main() {
    assert(digitSum("You arE Very Smart") == 14);
    std::cout << "digitSum: " << digitSum("You arE Very Smart") << std::endl;
    return 0;
}