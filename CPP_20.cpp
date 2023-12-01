`#include <vector>
#include <cmath>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }

    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::abs(numbers[0] - numbers[1]);
    int index1 = 0, index2 = 1;

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }

    std::vector<float> result;
    result.push_back(numbers[index1]);
    result.push_back(numbers[index2]);
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}`