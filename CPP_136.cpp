#include <vector>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {INT_MIN, 0};
    int smallest_positive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > result[0]) {
            result[0] = num;
        }
        if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }

    result[1] = smallest_positive;

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}