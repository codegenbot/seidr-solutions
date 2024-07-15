#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

namespace CustomVectorFunctions {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }

    std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
        std::vector<int> result;
        std::sort(l1.begin(), l1.end());
        std::sort(l2.begin(), l2.end());
        std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
        result.erase(std::unique(result.begin(), result.end()), result.end());
        return result;
    }
}