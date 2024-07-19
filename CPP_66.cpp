#include <iostream>
#include <cassert>
int digitSum(std::string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c;
        }
    }
    return sum;
}
int main() {
    assert(digitSum("You arE Very Smart") == 327);
    
    return 0;
}