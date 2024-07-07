#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        int diff = -l[i];
        int j = i + 1;
        while (j < l.size()) {
            if (l[j] == diff) {
                return true;
            } else if (l[j] > diff) {
                break;
            }
            j++;
        }
    }
    return false;
}