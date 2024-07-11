#include <iostream>
#include <vector>
#include <cmath>

long long odd_square_sum(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.5, 3.0, 4.0, 5.0};
    long long odd_sum = odd_square_sum(lst);
    assert(odd_sum == 34);
    return 0;
}