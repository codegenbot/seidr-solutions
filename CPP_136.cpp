#include <vector>
#include <cassert>
#include <algorithm>

bool std::vector<int>::issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(const std::vector<int>& input) {
    int smallest = *min_element(input.begin(), input.end());
    int largest = *max_element(input.begin(), input.end());
    return {smallest, largest};
}

int main() {
    assert(std::vector<int>::issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}