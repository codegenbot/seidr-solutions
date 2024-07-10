```cpp
#include <vector>
#include <algorithm>

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
    std::vector<int> expected = { -12, 2, 3, 4, 5, 8, 11, 12, 23, -10 };
    assert(issame(numbers, expected));
}