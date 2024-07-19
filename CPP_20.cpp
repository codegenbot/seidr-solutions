#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        }
    }
    return {num1, num2};
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    
    return 0;
}