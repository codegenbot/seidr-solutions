#include <cmath>
bool iscuber(int a) {
    int x = static_cast<int>(std::round(std::cbrt(a)));
    return (x * x * x == a);
}