#include <string>
#include <cctype>
#include <cassert>
using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("123abc") == 6);
    assert(digitSum("4x5y6z") == 15);
    // Add more test cases as needed
    return 0;
}