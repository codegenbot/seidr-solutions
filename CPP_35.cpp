```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> my_vector;
    for (int x : {-10, -3, 0, 1, 2, 3, 3, 5, 9, 124}) {
        my_vector.push_back(x);
    }
    int max_val = *std::max_element(my_vector.begin(), my_vector.end());
    return std::abs(max_val);
}