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
    assert(next_smallest({3, 1, 4, 1, 5, 9, 2, 6}) == 2);
    assert(next_smallest({9, 8, 7, 6, 5, 4, 3, 2, 1}) == 2);
    assert(next_smallest({1, 3, 3, 2, 1}) == 2);

    return 0;
}