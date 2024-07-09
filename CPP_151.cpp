#include <iostream>
#include <vector>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<double> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long long odd_sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)num * num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
}