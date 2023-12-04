```
#include <cmath>

float truncate_number(float number) {
    return std::abs(number - (int)number);
}
```