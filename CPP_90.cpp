#include <vector>
#include <algorithm>

int next_smallest(const vector<int>& lst) {
    sort(lst.begin(), lst.end());
    int count = 1;
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] > lst[i-1]) {
            count++;
        }
        if (count == 2) {
            return lst[i];
        }
    }
    return -1;
}