```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) {
        return nullptr;
    }
    sort(lst.begin(), lst.end());
    int secondSmallest = lst[1];
    for (int i = 2; i < lst.size(); i++) {
        if (lst[i] != secondSmallest) {
            return secondSmallest;
        }
    }
    return nullptr;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}
```