#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::vector<std::vector<float>> a, std::vector<std::vector<float>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i])) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::vector<float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < min_diff) {
                min_diff = std::abs(diff);
                closest.first = numbers[i];
                closest.second = numbers[j];
            }
        }
    }
    
    return {{closest.first}, {closest.second}}; 
}

int main() {
    assert(issame({{1.1}}, {{2.2}})); 
    return 0;
}