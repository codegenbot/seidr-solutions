```
#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive;
    for (auto i : l) {
        if (i > 0) {
            positive.push_back(i);
        }
    }
    return positive;
}
```