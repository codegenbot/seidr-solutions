#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    sort(lst.begin(), lst.end());
    int count = 1;
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != lst[i - 1]) {
            count++;
        }
        if (count == 2) {
            return lst[i];
        }
    }
    return -1;
}