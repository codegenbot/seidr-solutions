```cpp
#include <iostream>
#include <string>
#include <cctype>

int main() {
    int sum = digitSum("You arE Very Smart");
    assert(sum == 327);
    return 0;
}

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += static_cast<int>(c - 'A' + 1);
        }
    }
    return sum;
}