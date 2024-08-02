#include <vector>
#include <algorithm>

int largest_smallest_integers(const std::vector<int>& vec) {
    std::vector<int> sortedVec = vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    return sortedVec.front() + sortedVec.back();
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}