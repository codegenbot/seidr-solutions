Here is the completed code:

```cpp
#include <vector>
#include <algorithm>

std::vector<int> next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return std::vector<int>();
    std::sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] != lst[i + 1]) {
            return std::vector<int>{lst[i + 1]};
        }
    }
    return std::vector<int>();
}