Here is the completed code:

```cpp
#include <cmath>

using namespace std;

float triangle_area(float a, float b, float c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return -1;
    else
        return 0.5 * sqrt(c * (c - a) * (c - b)) * 100; // Convert to cm and then back to float with 2 decimal places.
}