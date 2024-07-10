#include <vector>
#include <cassert>

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
    std::vector<float> l = {1.5, -2.3, 4.0, 0.8, 5.6};
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    
    // Example usage of issame function
    std::vector<float> test1 = {1.5, 4.0, 0.8, 5.6};
    std::vector<float> test2 = {1.5, 4.0, 0.8, 5.6};
    assert(issame(test1, test2));
    
    return 0;
}