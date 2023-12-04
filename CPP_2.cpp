```
#include <cmath>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    assert(fabs(truncate_number(123.456) - 0.456) < 1e-4);
    return 0;
}
```