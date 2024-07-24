```cpp
#include <algorithm>
#include <vector>

int find_max(std::vector<int> numbers) {
    return *std::max_element(numbers.begin(), numbers.end());
}

int main() {
    std::vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_value = find_max(l);
    return max_value;
}