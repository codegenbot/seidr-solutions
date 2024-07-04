#include <iostream>
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
    assert(digitSum("You arE Very Smart 123") == 6);
    return 0;
}