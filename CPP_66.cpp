#include <string>
#include <cctype>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isalnum(c)) {
            sum += tolower(c) - '0';
        }
    }
    return sum;
}