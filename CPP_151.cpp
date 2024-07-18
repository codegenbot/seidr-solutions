#include <vector>
#include <cmath>
#include <cassert>

long long int double_the_difference(std::vector<float> lst) {
    long long int sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<int>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2.5, 3.0, 4.0, 5.0};
    long long int odd_sum = 34;

    assert(double_the_difference(lst) == odd_sum);
    return 0;
}