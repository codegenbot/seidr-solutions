#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += static_cast<int>(c - '0');
        }
    }
    return sum;