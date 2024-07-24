#include <vector>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; // None is represented as -1
    std::vector<int> v(lst);
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return v[i];
        }
    }
    return -1;
}