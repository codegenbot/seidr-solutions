#include <vector>
#include <algorithm>

namespace {
bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int max_negative = INT_MAX;
    int min_positive = 0;

    for(int i : lst) {
        if(i < 0 && i < max_negative) {
            max_negative = i;
        } else if(i > 0 && i < min_positive) {
            min_positive = i;
        }
    }

    return {max_negative, min_positive};
}