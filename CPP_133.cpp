#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = std::ceil(num);
        sum += ceil_num * ceil_num;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst[i];
    }
    std::cout << sum_squares(lst) << std::endl;
    return 0;
}