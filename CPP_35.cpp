````
#include <cassert>
#include <algorithm>
#include <cmath>

int main() {
    int max = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    assert(std::abs(max) - 12 < 1e-4);
    return 0;
}