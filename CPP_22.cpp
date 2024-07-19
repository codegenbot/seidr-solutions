#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> filter_integers(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        if (std::isdigit(num)) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}