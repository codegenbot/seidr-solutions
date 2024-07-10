```cpp
#include <vector>
#include <algorithm>
#include <limits>

namespace MyNamespace {
    bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin());
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

        return {{(max_negative > 0 ? std::numeric_limits<int>::max() : max_negative), (min_positive < 1 ? std::numeric_limits<int>::min() : min_positive)}};
    }
}