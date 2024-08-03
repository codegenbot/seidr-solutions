#include <vector>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::vector<float> closest_elements;
    float min_diff = std::abs(numbers[1] - numbers[0]);
    
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff1 = std::abs(numbers[i] - numbers[i - 1]);
        float diff2 = std::abs(numbers[i + 1] - numbers[i]);
        
        if (diff1 < min_diff && diff1 < diff2) {
            closest_elements = {numbers[i - 1], numbers[i]};
            min_diff = diff1;
        } else if (diff2 < min_diff && diff2 <= diff1) {
            closest_elements = {numbers[i], numbers[i + 1]};
            min_diff = diff2;
        }
    }
    
    return closest_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}