#include <vector>
#include <cassert>

float double_the_difference(const std::vector<float>& lst) {
    float sum = 0, odd_sum = 0;
    for (const auto& num : lst) {
        sum += num;
        if (static_cast<int>(num) % 2 != 0) {
            odd_sum += num;
        }
    }
    return 2 * (sum - odd_sum);
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (static_cast<int>(num) % 2 != 0) {
            odd_sum += num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}