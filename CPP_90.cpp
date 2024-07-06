#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    int res = sorted[1];
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == res) {
            if (i >= 2) return res;
            if (i == 1) continue;
            else return sorted[1]; // Return the next smallest
        }
    }
    return -1; // Return None
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}