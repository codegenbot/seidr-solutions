#include <string>

int digitSum(const std::string& str) {
    int sum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            sum += tolower(c) - '0';
        }
    }
    return sum;
}