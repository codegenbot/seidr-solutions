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
    assert(next_smallest({1, 3, 2, 4}) == 2);
    assert(next_smallest({5, 5, 5, 5}) == -1);
    assert(next_smallest({1, 1, 2, 3, 4}) == 2);

    return 0;
}