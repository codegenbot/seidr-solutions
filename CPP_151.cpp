#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst);

int main() {
    std::vector<float> lst = {2.5f, 3.0f, 4.0f, 5.0f};
    long long odd_sum = 29;

    assert(double_the_difference(lst) == odd_sum);
    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(pow(num, 2));
        }
    }
    return sum;
}