#include <cmath>
bool iscuber(int a) {
    return (cbrt(a) == static_cast<int>(cbrt(a)));
}