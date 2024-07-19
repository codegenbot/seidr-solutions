#include <vector>
#include <algorithm>
#include <cassert>
#include <cctype>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        if (std::isdigit(static_cast<unsigned char>(num))) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}