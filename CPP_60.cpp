#include <iostream>
#include <cassert>

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    assert(sum_to_n(100) == 5050);
    return 0;
}