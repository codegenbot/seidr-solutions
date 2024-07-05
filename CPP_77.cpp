#include <cmath>

bool iscuber(int a) {
    int cbrt_a = std::cbrt(a);
    return cbrt_a * cbrt_a * cbrt_a == a || (cbrt_a + 1) * (cbrt_a + 1) * (cbrt_a + 1) == a;
}