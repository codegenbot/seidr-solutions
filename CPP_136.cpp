#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {0, 0};
    int largest_negative = INT_MIN;
    int smallest_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative == INT_MIN ? 0 : largest_negative;
    result[1] = smallest_positive;
    
    return result;
}

int main() {
    assert(issame(largest_smallest_integers({-5, 3, 2, -8, 4}), {-5, 2}));
    assert(issame(largest_smallest_integers({1, -2, -3, 5, 11}), {-2, 1}));
    assert(issame(largest_smallest_integers({-10, -7, -3, -5, -2}), {-2, 0}));
    
    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}