```
#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> v1 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> v2 = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    assert(std::equal(v1.begin(), v1.end(), v2.begin()));
    return 0;
}
```