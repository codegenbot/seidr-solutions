```cpp
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x == 1)
        return true;
    for (int i = 2; i <= x; ++i) {
        if ((long long)i * i > x)
            break;
        if ((long long)i * i == x)
            return false;
    }
    return true;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    return 0;
}