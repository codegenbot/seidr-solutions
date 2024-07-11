#include <vector>
#include <limits>

std::vector<std::float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
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
    
    return {closest_pair.first, closest_pair.second};
}

bool std::issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-9)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(std::issame(result, {2.2, 3.1}));
}