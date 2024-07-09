#include <vector>
#include <algorithm>

bool isEqualTo(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {maxNeg, minPos};
}

int main() {
    assert(isEqualTo(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}