```cpp
#include <vector>
#include <algorithm>

bool operator==(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> input = {};
    assert(std::all_of(input.begin(), input.end(), [](float x) { return x > 0; }));
    return 0;
}