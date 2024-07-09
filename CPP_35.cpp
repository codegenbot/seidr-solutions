```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    auto max = *std::max_element({5.f, 3.f, -5.f, 2.f, -3.f, 3.f, 9.f, 0.f, 124.f, 1.f, -10.f});
    return 0;
}