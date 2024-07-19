```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max = *std::max_element(l.begin(), l.end());
    assert(abs(max-12)<1e-4);
    return *std::max_element(l.begin(), l.end());
}