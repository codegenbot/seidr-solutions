#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int max_neg = INT_MIN, min_pos = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > max_neg) {
            max_neg = num;
        }
        if (num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    return { max_neg, min_pos };
}