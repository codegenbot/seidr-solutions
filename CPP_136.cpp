#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;

    for (int num : lst) {
        if (num <= 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    return std::vector<int>{largest_negative, smallest_positive};
}

int main() {
    assert(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) == std::vector<int>{-3, 1});
}