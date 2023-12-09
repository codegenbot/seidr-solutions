```
#include <iostream>
#include <vector>

bool monotonic(std::vector<float> l) {
    if (l.size() <= 1) return true;
    bool increasing = l[0] < l[1];
    for (int i = 2; i < l.size(); i++) {
        if ((increasing && l[i-1] > l[i]) || (!increasing && l[i-1] < l[i])) return false;
    }
    return true;
}
```