```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i-1]) {
            return false;
        }
    }
    vector<int>::iterator it;
    it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return lst.size() == 1 || (lst[0] < *min_element(lst.begin()+1, it) && *max_element(lst.begin(), it) < lst.back());
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}