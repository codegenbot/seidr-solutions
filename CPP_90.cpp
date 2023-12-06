```
#include <iostream>
#include <vector>

int next_smallest(std::vector<int>& lst) {
    int smallest = *std::min_element(lst.begin() + 1, lst.end());
    return smallest;
}

int main() {
    std::vector<int> lst = {3, 4, 5, 6, 7};
    std::cout << next_smallest(lst) << std::endl;
    return 0;
}
```