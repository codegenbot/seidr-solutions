#include <iostream>
#include <string>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (auto c : s) {
        if (std::isdigit(c)) {
            sum += std::stoi(std::string(1, c).erase(0, 1));
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You are Very Smart") == 327);
    return 0;
}