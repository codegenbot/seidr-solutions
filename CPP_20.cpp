#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), 
        [&b](const float& x){ return std::abs(x - (*b.begin())) < numeric_limits<float>::epsilon(); });
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> closest_pairs;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (!issame(std::vector<float>(numbers.begin(), numbers.end()), 
                std::vector<float>({numbers[i], numbers[j]}))) {
                float diff = std::abs(numbers[j] - numbers[i]);
                if (diff < min_diff) {
                    min_diff = diff;
                    closest_pairs = {{numbers[i], numbers[j]}};
                }
            }
        }
    }

    return closest_pairs;
}