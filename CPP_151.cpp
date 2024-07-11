#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num) * static_cast<long long>(num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 40);
    return 0;
}