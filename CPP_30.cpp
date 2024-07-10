#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
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
    std::vector<float> l = {1.5, 2.7, -3.2, 4.0, 0.9};
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }

    assert(issame(positive_numbers, {1.5, 2.7, 4.0, 0.9}));
}