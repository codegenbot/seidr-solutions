```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) {
        return -1;
    }
    sort(lst.begin(), lst.end());
    int second_smallest = lst[1];
    for (int i = 2; i < lst.size(); ++i) {
        if (lst[i] != second_smallest) {
            return second_smallest;
        }
    }
    return -1;
}

int main() {
    vector<int> lst = {-35, 34, 12, -45};
    assert(next_smallest(lst) == -35);
    return 0;
}
```