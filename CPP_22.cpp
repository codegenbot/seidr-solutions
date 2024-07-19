#include <vector>
#include <algorithm>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<int>& v) {
    std::vector<int> result;
    for (int num : v) {
        if (std::is_integral<decltype(num)>::value) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}