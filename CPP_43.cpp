#include <vector>
#include <algorithm>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::vector<int> copy = l;
    for (int i = 0; i < copy.size(); i++) {
        int complement = -copy[i];
        auto it = std::find(copy.begin(), copy.end(), complement);
        if (it != copy.end() && *it != copy[i]) {
            return true;
        }
    }
    return false;
}