#include <vector>
#include <cassert>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(const vector<int>& lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    for(int num : lst) {
        if(num < 0) {
            if(num > largest_negative) {
                largest_negative = num;
            }
        }
        if(num > 0) {
            if(num < smallest_positive) {
                smallest_positive = num;
            }
        }
    }
    if (largest_negative == INT_MIN) largest_negative = 0; // No negative found
    if (smallest_positive == INT_MAX) smallest_positive = 0; // No positive found
    return {largest_negative, smallest_positive};
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    assert(issame(largest_smallest_integers({3, 5, -2, -8, 0, 2}), {-2, 2}));
    assert(issame(largest_smallest_integers({-10, -5, -1, 7, 9}), {-1, 7}));
    return 0;
}