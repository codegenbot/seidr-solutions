#include <vector>
#include <algorithm>

bool triples_sum_to_zero(std::vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        std::sort(l.begin() + i, l.end());
        int j = i;
        while (j + 1 < l.size()) {
            if (l[i] + l[j] + l[j + 1] == 0) {
                return true;
            }
            else if (l[i] + l[j] + l[j + 1] > 0) {
                break;
            }
            ++j;
        }
    }
    return false;
}