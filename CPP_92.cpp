```
#include <iostream>
#include <cmath>

std::string::iterator any_int(int a, int b, int c) {
    int sum = (int)(a + b);
    if (sum == c || sum == a || sum == b) {
        return std::string::iterator("True");
    } else {
        return std::string::iterator("False");
    }
}
```