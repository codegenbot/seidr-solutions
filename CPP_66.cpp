#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1; // Convert to equivalent integer value
        }
    }
    return sum;
}