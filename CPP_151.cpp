#include <iostream>
#include <cassert>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int odd_sum;

    int n;
    std::cin >> n;
    float num;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        lst.push_back(num);
    }

    std::cin >> odd_sum;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}