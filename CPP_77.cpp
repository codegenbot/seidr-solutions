#include <cmath>

bool isCube(int a) {
    if (a < 0) return false; // Optional: If negative numbers are not considered cubes
    int cbrt_a = round(cbrt(static_cast<double>(a)));
    return cbrt_a * cbrt_a * cbrt_a == a;
}