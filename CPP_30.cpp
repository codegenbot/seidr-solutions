#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}