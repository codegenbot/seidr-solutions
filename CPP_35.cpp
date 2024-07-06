````
#include <vector>
#include <algorithm>

float max_value(std::vector<float> l) {
    std::vector<float> v = l;
    return *std::max_element(v.begin(),v.end());
}
```