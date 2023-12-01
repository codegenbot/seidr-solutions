#include <vector>
#include <cmath>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (std::fabs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::fabs(numbers[0] - numbers[1]);
    float num1 = numbers[0];
    float num2 = numbers[1];

    for (size_t i = 0; i < numbers.size() - 1; i++) {
        for (size_t j = i + 1; j < numbers.size(); j++) {
            float diff = std::fabs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    std::vector<float> result;
    result.push_back(num1);
    result.push_back(num2);

    return result;
}

int solveProblem() {
    assert(issame(find_closest_elements(std::vector<float>({1.1, 2.2, 3.1, 4.1, 5.1})), std::vector<float>({2.2, 3.1})));
    return 0;
}

int main() {
    return solveProblem();
}