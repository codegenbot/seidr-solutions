#include <cmath>

bool iscuber(int a) {
    int cbrt_a = std::round(std::cbrt(a));
    return cbrt_a * cbrt_a * cbrt_a == a;
}