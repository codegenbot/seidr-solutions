#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
    auto v = std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    assert(abs(*v - 124) < 1e-4);
}