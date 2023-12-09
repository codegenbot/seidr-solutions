```
#include <iostream>
#include <vector>

std::vector<int> incr_vector(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto& x : v) {
        result.push_back(x + 1);
    }
    return result;
}
```