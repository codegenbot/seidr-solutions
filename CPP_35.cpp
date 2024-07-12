```cpp
#include <algorithm>
#include <vector>
#include <initializer_list>

int main() {
    int max_val;
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}