#include <vector>
#include <algorithm>

std::vector<float> getPositive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

bool areSame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(areSame(getPositive({}), {}) );
    return 0;
}