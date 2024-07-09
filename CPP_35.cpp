```cpp
#include <vector>
#include <algorithm>

float findMax(vector<float> l) {
    return *max_element(l.begin(), l.end());
}