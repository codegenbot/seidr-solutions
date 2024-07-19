```cpp
#include <vector>
#include <algorithm>

bool isSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
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
    assert(isSame(get_positive({}), {}) == true);
    return 0;
}