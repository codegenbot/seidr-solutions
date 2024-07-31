#include <vector>
#include <algorithm>

int count(const std::vector<int>& vec, int value) {
    int count = 0;
    for (int i : vec) {
        if (i == value) {
            count++;
        }
    }
    return count;
}

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || count(lst, lst[i]) > 1) {
            return false;
        }
    }
    return true;
}