```cpp
#include <cmath>

using namespace std;

float truncate_number(float number) {
    int integerPart = (int)round(number);
    return float(integerPart);
}