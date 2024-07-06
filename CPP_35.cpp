#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_value = *std::max_element(numbers.begin(), numbers.end());
    return 0;
}