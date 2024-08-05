#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> positive;
    for (float num : v) {
        if (num > 0) {
            positive.push_back(num);
        }
    }
    return positive;
}

int main() {
    assert(issame(get_positive({}), {}));
    // Add more test cases as needed
    return 0;
}