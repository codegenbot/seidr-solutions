#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a % 3 == b % 3;
}

void sort_third(std::vector<int>& res, int i) {
    std::sort(res.begin() + i, res.begin() + i + 3);
}

std::vector<int> fix_code(const std::vector<int>& l) {
    std::vector<int> res = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0 && !issame(res[i], res[i+1])) {
            sort_third(res, i);
        }
    }
    return res;
}