#include <algorithm>
#include <cmath>

int main() {
    int max_val = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    int abs_max_val = std::abs(*std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}));
    return 0;
}