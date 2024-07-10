#include <iostream>
#include <vector>
#include <cassert>

namespace std {
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

    std::vector<float> get_positive(std::vector<float> l);

}

std::vector<float> std::get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::issame({1.0, 2.0, 3.0}, {1.0, 2.0, 3.0}));
    assert(!std::issame({1.0, 2.0, 3.0}, {1.0, 2.0, 4.0}));

    return 0;
}