```
#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> &l) {
    std::vector<float> res;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            res.push_back(l[i]);
        }
    }
    return res;
}
```