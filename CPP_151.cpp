#include <vector>
#include <cassert>

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (num % 1 != 0) {
            odd_sum += num;
        }
    }
    return odd_sum * 2.0f;
}

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.5f, 4.0f};
    float expected = double_the_difference(lst);
    assert(expected == 6.0f);
}