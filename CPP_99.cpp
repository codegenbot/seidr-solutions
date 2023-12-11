```
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int rounded = round(num);
    if (abs(rounded - num) == 0.5 && num > 0) {
        return rounded + 1;
    } else if (abs(rounded - num) == 0.5 && num < 0) {
        return rounded - 1;
    } else {
        return rounded;
    }
}
```