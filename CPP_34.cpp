#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of the issame function
}

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> sorted_unique = l;
    std::sort(sorted_unique.begin(), sorted_unique.end());
    sorted_unique.erase(std::unique(sorted_unique.begin(), sorted_unique.end()), sorted_unique.end());

    assert(issame(sorted_unique, {0, 2, 3, 5, 9, 123}));

    return 0;
}