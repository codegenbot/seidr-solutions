#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += (int)c - 55;  // Convert uppercase letter to its corresponding digit
        }
    }
    return sum;
}