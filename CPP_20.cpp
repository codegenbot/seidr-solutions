#include <algorithm>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[j] - numbers[i]) < std::abs(closest_pair.second - closest_pair.first)) {
                closest_pair = std::make_pair(std::min(numbers[i], numbers[j]), std::max(numbers[i], numbers[j]));
            }
        }
    }

    return {closest_pair};
}

int main() {
    // Your code here
    return 0;
}