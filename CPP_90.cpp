#include <vector>
#include <algorithm>

int findNextSmallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    if (lst.size() < 2)
        return -1;
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] != lst[i + 1])
            return lst[i + 1];
    }
    return -1;

}

int main() {
    assert(findNextSmallest({-35, 34, 12, -45}) == -35);
}