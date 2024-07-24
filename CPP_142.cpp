```c++
#include <iostream>
#include <string>

int sum_of_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main() {
    int sum = 0;
    for (int i : {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5}) {
        sum += i * i;
    }
    assert(sum == -1448);
    return 0;
}