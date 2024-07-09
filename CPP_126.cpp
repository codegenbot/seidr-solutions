```cpp
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    return std::is_sorted(lst.begin(), lst.end());
}