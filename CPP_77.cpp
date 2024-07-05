#include <cmath>

bool iscuber(int a) {
    int cbrt_a = round(cbrt(a));
    return cbrt_a * cbrt_a * cbrt_a == a;
}