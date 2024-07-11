#include <vector>
#include <algorithm>

bool triples_sum_to_zero(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    for (int i = 0; i < l.size(); ++i) {
        int j = i + 1;
        while (j < l.size()) {
            int target = -(l[i] + l[j]);
            if (std::binary_search(l.begin(), l.end(), target)) {
                return true;
            } else if (target < l[j]) {
                break; // move to next 'i' as target will be less than all other elements
            }
            ++j;
        }
    }
    return false;
}