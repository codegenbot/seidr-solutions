#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (auto x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {};
    assert(std::equal(get_positive(input).begin(), get_positive(input).end(), input.begin()));
    return 0;
}