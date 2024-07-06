#include <string>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += (int)c - 55; // Subtracting 55 to convert uppercase letters to their corresponding digits
        }
    }
    return sum;
}