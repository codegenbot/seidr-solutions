```cpp
#include <string>
int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += tolower(c) - 'a' + 1;
        } else if (isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;
}