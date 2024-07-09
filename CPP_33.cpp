#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

void sort_third(std::vector<int>& l) {
    std::vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            std::sort(res.begin() + i, res.begin() + i + 3, issame);
        }
    }
    l = res;
}