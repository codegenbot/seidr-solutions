#include <cmath>

bool iscuber(int a) {
    int cbrt_a = std::round(std::pow(a, 1.0/3));
    return cbrt_a * cbrt_a * cbrt_a == a || (cbrt_a - 1) * (cbrt_a - 1) * (cbrt_a - 1) == a || (cbrt_a + 1) * (cbrt_a + 1) * (cbrt_a + 1) == a;
}