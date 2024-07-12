```c++
#include <algorithm>
#include <cmath>

int main() {
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}