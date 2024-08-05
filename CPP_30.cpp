#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (const auto& num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    // Example usage of get_positive function
    std::vector<float> numbers = {1.5, -2.3, 3.7, -0.8, 5.2};
    std::vector<float> positive_numbers = get_positive(numbers);

    for (const auto& num : positive_numbers) {
        std::cout << num << " ";
    }

    return 0;
}