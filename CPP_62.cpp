#include <vector>
#include <cassert>
#include <iostream>

namespace std {
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
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(std::issame(std::vector<float>({1}), std::vector<float>({})));
    // Add more test cases here if needed
    return 0;
}