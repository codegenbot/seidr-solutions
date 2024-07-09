#include <string>
int digitSum(string s) {
    int letterSum = 0;
    int digitSum = 0;
    for (char c : s) {
        if (isupper(c)) {
            letterSum += c - 'A' + 1; // Convert uppercase to numbers (A=1, B=2...)
        } else if (isdigit(c)) {
            digitSum += c - '0'; // Convert digits to numbers
        }
    }
    return letterSum + digitSum;
}