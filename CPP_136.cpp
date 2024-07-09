#include <vector>
#include <cassert>
#include <climits>

std::pair<int, int> largest_smallest_integers(std::vector<int> lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}

int main() {
    auto result = largest_smallest_integers({-6, -4, -4, -3, -100, 1});
    assert(result == std::pair<int, int>(-100, 1));
    return 0;
}