#include <vector>
#include <cassert>
#include <cmath>

long long calculate_odd_square_sum(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)(num * num);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 3.0, 5.0, 7.0, 9.0};
    long long odd_sum = 165;
    assert(calculate_odd_square_sum(lst) == odd_sum);
    return 0;
}