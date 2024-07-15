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
    int n;
    std::cin >> n;
    std::cout << sum_to_n(n) << std::endl;
    return 0;
}