#include <vector>
#include <algorithm>

int largest_smallest_integers(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec.front() + vec.back();
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (largest_smallest_integers(a) == largest_smallest_integers(b));
}