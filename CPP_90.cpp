```
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    int smallest = INT_MAX;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] < smallest) {
            smallest = lst[i];
        }
    }
    return smallest;
}
```