```cpp
#include <iostream>
#include <vector>
#include <assert.h>

bool compare_vectors(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0 && !l.empty()) { 
            result.push_back(i);
        }
    }
    return result;
}

int main_func() {
    assert(compare_vectors(get_positive({1}), {1}));
    return 0;
}