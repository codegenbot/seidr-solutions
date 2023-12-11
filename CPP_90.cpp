```
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

optional<int> next_smallest(vector<int>& lst);

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v) == -35);
    return 0;
}

optional<int> next_smallest(vector<int>& lst) {
    if (lst.size() < 2) {
        return nullopt;
    }
    sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] != lst[0]) {
            return lst[i];
        }
    }
    return nullopt;
}
```