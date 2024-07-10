#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const vector<int>& lst) {
    sort(lst.begin(), lst.end());
    int count = 0;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != lst[i - 1]) {
            count++;
        }
        if (count == 1) {
            return lst[i];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
}