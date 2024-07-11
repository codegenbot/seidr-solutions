#include <vector>
#include <algorithm>

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

        std::vector<int> result;
        result.push_back(std::max(max_negative, 0));
        result.push_back(std::min(min_positive, 1));

        return {{result}};
    }
}

int main() {
    assert(MyNamespace::isSame({std::max(-6, 0), std::min(1, -100)}, {-3, 1}));
    return 0;
}