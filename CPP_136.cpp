#include <vector>
#include <algorithm>
#include <initializer_list>

namespace MyNamespace {
    bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    std::vector<int> lst = {-5,-3,-1,0,2};
    if(MyNamespace::isSame({{0,1}},{MyNamespace::largest_smallest_integers(lst)}) ) {
        return 0;
    } else {
        return 1;
    }
}