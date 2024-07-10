#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::sort(numbers.begin(), numbers.end()); 
    assert(issame(numbers, {12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}