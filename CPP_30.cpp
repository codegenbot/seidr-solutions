#include <vector>
#include <cassert>

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

std::vector<float> get_positive(std::vector<float> input) {
    std::vector<float> pos;
    for (float x : input) {
        if (x >= 0) {
            pos.push_back(x);
        }
    }
    return pos;
}

int main() {
    std::vector<float> input;
    assert(issame(get_positive(input), {}));
    return 0;
}