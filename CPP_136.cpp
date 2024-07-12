#include <iostream>
#include <vector>
#include <cassert>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = std::numeric_limits<int>::min(), smallest_positive = std::numeric_limits<int>::max();
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
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
}