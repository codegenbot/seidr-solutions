#include <algorithm> // Add this header
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) { // Correct function signature
    return std::is_permutation(a.begin(), a.end(), b.begin());
}