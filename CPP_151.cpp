```
#include <vector>
#include <cmath>

int double_the_difference(const std::vector<float>& numbers) {
    int sum = 0;
    for (float number : numbers) {
        if (std::floor(number) == std::ceil(number)) {
            sum += static_cast<int>(number);
        }
    }
    return abs(sum - double(sum));
}

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f};
    int result = double_the_difference(lst);
    float odd_sum = 0.0f;
    for (float number : lst) {
        if (std::floor(number) != std::ceil(number)) {
            odd_sum += number;
        }
    }
    assert(result == static_cast<int>(odd_sum)); 
    return result;
}