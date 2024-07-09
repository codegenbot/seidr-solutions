#include <iostream>
#include <vector>
#include <cmath>

float double_the_difference(const std::vector<float>& lst) {
    float odd_sum = 0;
    for (const auto& num : lst) {
        if ((int)num % 2 != 0) {
            odd_sum += pow(num, 2);
        }
    }
    return fmod(1.2, 1) + fmod(-3.4, 1) - fmod(5.6, 1) - fmod(0.7, 1) + fmod(-8.9, 1) - odd_sum;
}

int main() {
    std::vector<float> lst = {1.2f, -3.4f, 5.6f, 0.7f, -8.9f};
    assert(double_the_difference(lst) == (pow(fmod(1.2, 1), 2) + pow(fmod(-3.4, 1), 2) + pow(fmod(5.6, 1), 2)));
    return 0;
}