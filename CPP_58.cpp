#include <vector>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    // Your existing code here
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));

    result.erase(std::unique(result.begin(), result.end()), result.end());

    return result;
}

#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}