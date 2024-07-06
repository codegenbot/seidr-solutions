#include <string>
#include <cctype>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        }
    }
    return sum;
}