#include <iostream>
#include <cassert>

int greatest_common_divisor(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    assert(greatest_common_divisor(144, 60) == 12);
    return 0;
}