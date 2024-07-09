```cpp
#include <algorithm>
#include <cmath>

int main() {
    int l[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v(l, l+11);
    return *std::max_element(v.begin(), v.end());
}