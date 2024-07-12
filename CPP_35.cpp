#include <algorithm>
#include <vector>
#include <initializer_list>

int main() {
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}