```
#include <iostream>
#include <cassert>
#include <cmath>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    return 0;
}
```
The issue is caused by the use of backticks (```) in the code, which are not allowed in C++. To fix this, you can replace the backticks with single quotes (') or double quotes ("") to delimit strings.