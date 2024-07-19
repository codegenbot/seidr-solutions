```cpp
#include <vector>
#include <algorithm>

int max_value(std::vector<int> l) {
    int max = l[0];
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}