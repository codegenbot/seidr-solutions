```cpp
#include <algorithm>
#include <cmath>

int main() {
    int max = *max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return abs(max - 12);
}