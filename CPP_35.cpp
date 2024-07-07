```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l = {5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f};
    auto it = std::max_element(l.begin(), l.end());
    return *it;
}