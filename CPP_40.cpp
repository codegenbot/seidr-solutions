#include <vector>
#include <algorithm>

bool triples_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); ++i) {
        int j = i + 1, k = l.size() - 1;
        while (j < k) {
            int target = -(l[i] + l[j]);
            if (target == l[k]) {
                return true;
            } else if (target < l[k]) {
                ++k;
            } else {
                ++j;
            }
        }
    }
    return false;
}