#include <algorithm>
#include <vector>

int main() {
    std::vector<int> my_vector = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}