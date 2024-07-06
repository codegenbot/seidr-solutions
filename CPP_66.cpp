```cpp
#include <iostream>
#include <string>
#include <cctype>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += static_cast<int>(c - 'A' + 1);
        }
    }
    return sum;
}

int main() {
    int sum = digitSum("You arE Very Smart");
    std::cout << sum << std::endl;
    return 0;
}