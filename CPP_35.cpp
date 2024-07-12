```cpp
#include <iostream>
#include <vector>

int calculateMax() {
    int my_vector[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v(my_vector, my_vector + sizeof(my_vector) / sizeof(my_vector[0]));
    int max_val = *std::max_element(v.begin(), v.end());
    return std::abs(max_val);
}

int main() {
    calculateMax();
    return 0;
}