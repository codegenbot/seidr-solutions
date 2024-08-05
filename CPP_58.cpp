#include <algorithm>
#include <vector>
#include <iterator>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> l1 = {1, 2, 3, 4, 5};
    std::vector<int> l2 = {3, 4, 5, 6, 7};

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result;
}