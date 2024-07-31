#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set<int> set1(l1.begin(), l1.end());
    for (int element : l2) {
        if (set1.find(element) != set1.end()) {
            result.push_back(element);
        }
    }

    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}