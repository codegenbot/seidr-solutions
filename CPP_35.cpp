```cpp
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    assert (std::abs(std::max_element(l.begin(), l.end())- 12.0) < 1e-4);
}