#include <vector>
#include <cassert>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> numbers){
    std::vector<float> closest;
    if (numbers.size() < 2) {
        return closest;
    }
    
    float min_diff = std::abs(numbers[0] - numbers[1]);
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float diff = std::abs(numbers[i] - numbers[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest = {numbers[i], numbers[i + 1]};
        }
    }
    return closest;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
}