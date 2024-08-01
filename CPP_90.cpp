#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1;
    std::sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for (int num : lst) {
        if (num > smallest) return num;
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}