#include <algorithm>
#include <cassert>
#include <vector>

int next_smallest(const std::vector<int>& lst) {
    std::sort(lst.begin(), lst.end());
    int count = 1;
    int prev = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] != prev) {
            count++;
            if (count == 2) {
                return lst[i];
            }
            prev = lst[i];
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}