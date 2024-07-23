#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) {
            return false;
        }
    }
    return true;
}

bool sort_even(std::vector<float>& v) {
    std::stable_partition(v.begin(), v.end(), [](float x){return x < 0;});
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if ((v[i] > 0 && i != 0) || (i == 0 && !issame({v[0]}, {v[1]}))) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}));
    return 0;
}