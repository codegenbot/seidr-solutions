#include <iostream>
#include <string>
#include <cctype>

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
    cout << digitSum("You arE Very Smart 123") << endl; // Output should be 6
    return 0;
}