```c++
#include <assert.h>
#include <algorithm>
#include <vector>

int maxElement(std::vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}

int main() {
    assert (abs(maxElement({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 12)<1e-4);
    return 0;
}