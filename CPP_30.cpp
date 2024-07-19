#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::equal(get_positive({}).begin(), get_positive({}).end(), {}));
    return 0;
}