#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        int j = 0;
        while (j <= i && j < l.size()) {
            if ((l[i] + l[j]) == 0) {
                return true;
            }
            j++;
        }
    }
    return false;
}