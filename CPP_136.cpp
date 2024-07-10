Here is the corrected code:

```cpp
#include <vector>
#include <algorithm>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int max_negative = 0;
    int min_positive = std::numeric_limits<int>::max();

    for (int i : lst) {
        if (i < 0 && i > max_negative) {
            max_negative = i;
        } else if (i > 0 && i < min_positive) {
            min_positive = i;
        }
    }

    return {std::max({(max_negative > 0 ? std::numeric_limits<int>::max() : max_negative),
                      (min_positive < 1 ? std::numeric_limits<int>::min() : min_positive)}, 0)};
}