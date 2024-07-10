#include <vector>
#include <algorithm>

namespace MyNamespace {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> largest_smallest_integers(std::vector<int> lst) {
        int max_negative = 0;
        int min_positive = INT_MAX;

        for(int i : lst) {
            if(i < 0 && i > max_negative) {
                max_negative = i;
            } else if(i > 0 && i < min_positive) {
                min_positive = i;
            }
        }

        return {std::max({max_negative, -min_positive})};
    }
}