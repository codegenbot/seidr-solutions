```cpp
#include <iostream>
#include <vector>
#include <assert.h>

bool isSame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> getPositive(std::vector<float> l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main1() {
    assert(isSame(getPositive({}), {}) == true); 
    return 0;
}