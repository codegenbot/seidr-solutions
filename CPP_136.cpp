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
    std::vector<int> v1 = {2, -3, 4, 5};
    std::vector<int> v2 = {-3, 4, 5, 6};

    if(MyNamespace::isSame(v1, v2)) {
        std::cout << "v1 and v2 are same" << std::endl;
    } else {
        std::cout << "v1 and v2 are different" << std::endl;

        for(int i : MyNamespace::largest_smallest_integers(v1)) {
            for(int j : i) {
                std::cout << j << " ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}