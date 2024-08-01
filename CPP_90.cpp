#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    sort(lst.begin(), lst.end());
    int count = 1;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i - 1] != lst[i]) {
            count++;
        }
        if (count == 2) {
            return lst[i];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}