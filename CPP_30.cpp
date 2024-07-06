```cpp
#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> input = {-1.5, -2.5, 3.5};
    std::vector<float> expected = {3.5};
    
    std::vector<float> output = get_positive(input);
    
    assert(issame(output, expected));
    
    return 0;
}