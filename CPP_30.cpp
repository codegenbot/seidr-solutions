#include <vector>
#include <assert.h>

bool issame(std::initializer_list<float> a, std::initializer_list<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a.begin()[i] != b.begin()[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::initializer_list<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}