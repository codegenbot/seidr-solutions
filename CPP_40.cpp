#include <vector>
#include <algorithm>

bool triples_sum_to_zero(std::vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        std::sort(l.begin() + i, l.end());
        int left = 0;
        int right = l.size() - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return false;
}