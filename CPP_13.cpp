#include <iostream>
#include <cassert>

int greatest_common_divisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    assert(greatest_common_divisor(144, 60) == 12);
    
    return 0;
}