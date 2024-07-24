#include <algorithm>
#include <cmath>

int main() {
    int max_val = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    int max_abs = *std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}, [](int a, int b){ return std::abs(a) < std::abs(b); });
    return 0;
}