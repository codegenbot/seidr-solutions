#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += static_cast<int>(c - 'A' + 1);
        }
    }
    return sum;