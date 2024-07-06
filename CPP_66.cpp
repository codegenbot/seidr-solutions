#include <string>
#include <algorithm>

int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (std::isdigit(c)) {
            sum += std::stoi(std::string(1, c));
        }
    }
    return sum;
}