#include <cmath>

bool iscuber(int a) {
    int b = round(cbrt(a));
    return b * b * b == a;
}