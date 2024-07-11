#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> unique_elements = {5, 3, 5, 2, 3, 3, 9, 0, 123};
std::sort(unique_elements.begin(), unique_elements.end());
unique_elements.erase(std::unique(unique_elements.begin(), unique_elements.end()), unique_elements.end());
assert(issame(unique_elements, {0, 2, 3, 5, 9, 123}));