#include <algorithm>
#include <vector>
#include <set>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>({4, 3, 2, 8}), std::vector<int>{}));

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    std::vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}