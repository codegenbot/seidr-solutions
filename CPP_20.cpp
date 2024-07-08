#include <algorithm>
#include <vector>

bool areEqual(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2] = {0};

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}

int main() {
    assert(areEqual(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), std::vector<float>( {2.2, 3.1} )));
    return 0;
}