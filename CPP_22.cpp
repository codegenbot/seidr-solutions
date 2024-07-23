#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int filter_integers(std::vector<int> nums) {
        std::vector<int> result;
        for (int num : nums) {
            if (std::isinteger(num)) {
                result.push_back(static_cast<int>(num));
            }
        }
        return 0;
    }

    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}