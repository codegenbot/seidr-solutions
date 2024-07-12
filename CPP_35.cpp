```cpp
#include <algorithm>
#include <vector>

int calculateMax() {
    int my_vector[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_val = *std::max_element(std::begin(my_vector), std::end(my_vector));
    return std::abs(max_val);
}