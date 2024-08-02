#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; ++i) {
        if (std::abs(l[i]) + l[i] == 0) return true;
        int j = i + 1;
        while (j < l.size()) {
            if (l[i] + l[j] == 0) return true;
            else if (l[i] + l[j] > 0) break;
            ++j;
        }
    }
    return false;
}