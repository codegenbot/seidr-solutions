#include <iostream>
#include <vector>
#include <cassert>

// Function signature
long long double_the_difference(std::vector<double>& lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.5, 2.0, 3.0, 4.0, 5.5};
    long long odd_sum = double_the_difference(lst);

    assert(odd_sum == 42);

    return 0;
}