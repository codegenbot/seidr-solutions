```
#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive;
    for (auto i : l) {
        if (i > 0) {
            positive.push_back(i);
        }
    }
    return positive;
}

bool issame(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}
```