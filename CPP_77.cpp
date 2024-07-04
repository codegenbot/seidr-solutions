#include <cmath>

bool isCube(int a) {
    int cbrt_a = round(cbrt(static_cast<double>(a)));
    return cbrt_a * cbrt_a * cbrt_a == a;
}