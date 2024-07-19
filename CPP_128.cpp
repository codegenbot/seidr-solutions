```cpp
#include <vector>

int prod_signs(int numbers[], int n) {
    int sign = 1;
    for (int i = 0; i < n; i++) {
        if (numbers[i] != 0) {
            sign *= (numbers[i] > 0 ? 1 : -1);
        }
    }
    return sign;
}