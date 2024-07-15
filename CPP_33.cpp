#include <vector>
#include <algorithm>

void sort_third(std::vector<int>& b) {
    for (int i = 0; i < b.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            std::sort(b.begin() + i - 2, b.begin() + i + 1);
        }
    }
}

std::vector<int> issame(std::vector<int> l) {
    std::vector<int> l_copy = l;
    sort_third(l_copy);
    return l_copy;
}