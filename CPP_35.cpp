```cpp
#include <vector>
#include <algorithm>

int max_value(std::vector<int> l) {
    if(l.size() == 0) {
        return -1; // handle empty vector
    }
    return *std::max_element(l.begin(), l.end());
}