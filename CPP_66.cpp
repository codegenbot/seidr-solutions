#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isalnum(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}