#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> largest_smallest_integers(const std::vector<int>& lst){
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

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    assert (issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}