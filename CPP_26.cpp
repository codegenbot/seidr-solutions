#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

std::vector<int> remove_duplicates(std::vector<int> vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    input = remove_duplicates(input);
    assert(issame(input, std::vector<int>{1, 4, 5}));

    return 0;
}