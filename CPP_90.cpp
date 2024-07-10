Here is the completed code:

```cpp
#include <vector>
#include <algorithm>

std::vector<int> next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return {};
    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] != lst[i + 1]) {
            return {lst[i + 1]};
        }
    }
    return {};
}