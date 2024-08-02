#include <vector>
#include <algorithm>

int largest_smallest_integers(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v.back() - v.front();
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}