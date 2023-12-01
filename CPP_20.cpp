#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> find_closest_elements(std::vector<float> numbers);

bool is_same_vector(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-4)
            return false;
    }
    return true;
}