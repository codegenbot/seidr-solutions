```cpp
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    auto it = lower_bound(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end()));
    return *it == *max_element(lst.begin(), lst.end()) ? -1 : *prev(it);
}