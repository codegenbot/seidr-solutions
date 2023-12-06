```
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    int rounded = round(num);
    if (abs(rounded - num) == 0.5) {
        return (num > 0) ? rounded + 1 : rounded - 1;
    }
    return rounded;
}
```