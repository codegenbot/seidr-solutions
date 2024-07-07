```cpp
#include <algorithm>
#include <cmath>

int main() {
    int abs(int x) { return x >= 0 ? x : -x; }
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return (abs(*max_element(l.begin(), l.end())));
}