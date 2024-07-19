#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const vector<int>& lst) {
    sort(lst.begin(), lst.end());
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
    assert(next_smallest({5, 3, 7, 2, 8}) == 3);
    assert(next_smallest({1, 2, 3, 4, 5}) == 2);
    assert(next_smallest({9, 8, 7, 6, 5}) == 5);

    return 0;
}