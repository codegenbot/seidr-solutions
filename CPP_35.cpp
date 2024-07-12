#include <algorithm>
#include <vector>
#include <initializer_list>

int absolute_value_of_max(std::initializer_list<int> il) {
    std::vector<int> my_vector(il);
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}