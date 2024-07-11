```cpp
#include <vector>
#include <limits>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {0.0f, 0.0f};
    }
    
    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }
    
    return closest_pair;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> result = find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f});
    if (!issame({result.first, result.second}, {2.2f, 3.1f})) {
        return 1;
    }
    return 0;
}