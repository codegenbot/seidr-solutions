```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) { 
    return a == b; 
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must contain at least two elements");
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if ((numbers[i] <= numbers[j]) && (abs(numbers[i] - numbers[j]) < min_diff)) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return closest_pair;
}

int main() {
    assert(std::equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    // test your code here
}