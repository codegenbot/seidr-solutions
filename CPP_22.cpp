#include <vector>
#include <algorithm>
#include <assert.h>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<int>& v) {
    std::vector<int> result;
    
    for (int num : v) {
        if (num >= '0' && num <= '9') {
            result.push_back(num - '0');
        }
    }
    
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}