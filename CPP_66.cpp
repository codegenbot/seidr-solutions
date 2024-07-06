#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += static_cast<int>(c - '0');
        }
    }
    return sum;
}