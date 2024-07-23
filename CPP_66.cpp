#include <iostream>
#include <string>
using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1; 
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 12);
    return 0;
}