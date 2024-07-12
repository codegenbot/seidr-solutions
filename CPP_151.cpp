```cpp
#include <vector>
#include <cmath>

std::vector<float> input_vector = {1.0f, 2.0f, 3.0f};

double double_the_difference(std::vector<float>& lst) {
    if (lst.size() == 0) return 0;
    float sum = 0;
    for (float x : lst) {
        sum += x;
    }
    return std::abs(sum - lst[0]);
}

float odd_sum(std::vector<float>& lst) {
    float sum = 0.0f;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float odd_sum_val = 0.0f;

    // your code here

    assert(double_the_difference(lst) == odd_sum_val);
}