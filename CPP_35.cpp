```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxNum = *std::max_element(numbers.begin(), numbers.end());
    assert(maxNum == 124); 
    std::cout << maxNum << std::endl;
    return 0;
}