```cpp
#include <iostream>
#include <string>
#include <cassert>

int sum_of_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main() {
    assert(sum_of_squares(1*1 + 3*3 + 17*17 + 1*1 + 15*15 + 13*13 + 1*1 + 14*14 + 14*14 + 12*12 + 5*5) == 385);
    return 0;
}