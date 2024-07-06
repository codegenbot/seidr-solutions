#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (!isupper(c)) {
            int d = c - '0';
            sum += d;
        }
    }
    return sum;