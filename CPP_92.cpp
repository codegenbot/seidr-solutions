```
#include <cmath>

bool any_int(float a, float b, float c) {
    if (a == lround(b + c) || b == lround(a + c) || c == lround(a + b)) {
        return true;
    } else {
        return false;
    }
}
```