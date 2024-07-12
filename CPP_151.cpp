#include <vector>
#include <iostream>

float odd_sum(const std::vector<float>& vec) {
    float sum = 0;
    for (auto num : vec) {
        if (num % 2 != 0)
            sum += num;
    }
    return sum;
}

float double_the_difference(const std::vector<float>& vec) {
    float diff1 = 0, diff2 = 0;
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1])
            diff1 += vec[i] - vec[i + 1];
        else
            diff2 += vec[i] - vec[i + 1];
    }
    return std::abs(diff1 - diff2);
}

int main() {
    std::vector<float> lst({1.0f, 2.0f, 3.0f});
    float oddSum = odd_sum(lst);
    assert(double_the_difference(lst) == oddSum); 
    return 0;
}