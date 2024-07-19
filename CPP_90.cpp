#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int count = 1;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > lst[i - 1]) {
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