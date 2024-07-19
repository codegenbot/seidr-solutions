#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float value : v) {
        if (value > 0) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert (issame(get_positive({-1, 0, 2, 3}) , {2, 3}));
    return 0;
}