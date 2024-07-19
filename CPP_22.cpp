#include <vector>
#include <cassert>
#include <cctype>

bool std::issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<int>& input) {
    std::vector<int> result;
    for (char num : input) {
        if (std::isdigit(num)) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    
    return 0;
}