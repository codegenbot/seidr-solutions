```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

namespace MyNamespace {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return std::equal(a.begin(), a.end(), b.begin());
    }

    std::vector<std::vector<int>> largest_smallest_integers(std::vector<int> lst) {
        int max_negative = 0;
        int min_positive = INT_MAX;

        for(int i : lst) {
            if(i < 0 && i > max_negative) {
                max_negative = i;
            } else if(i > 0 && i < min_positive) {
                min_positive = i;
            }
        }

        return {{std::max(max_negative, 0), std::min(min_positive, 1)}};
    }
}

assert(MyNamespace::largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == {{-3, 1}});