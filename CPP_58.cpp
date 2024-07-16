#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implement your comparison logic here
    return a == b;
}

int main() {
    std::vector<int> l1 = {4, 3, 2, 8};
    std::vector<int> l2 = {};

    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));

    result.erase(std::unique(result.begin(), result.end()), result.end());

    // Make sure to adjust this call according to your function logic
    assert(issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{}));

    return 0;
}