```cpp
#include <vector>

int prod_signs(std::vector<int> numbers) {
    int sign = 1;
    for (int number : numbers) {
        if (number != 0) {
            sign *= (number > 0 ? 1 : -1);
        }
    }
    return sign;
}