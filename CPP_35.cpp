#include <cassert>
#include <algorithm>
#include <cmath>

int main() {
    assert(std::abs(std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}, nullptr)) - 12 < 1e-4);
    return 0;
}