#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int i = 0; i < lst.size(); i++) {
        if(lst[i] < 0 && lst[i] > largest_negative) {
            largest_negative = lst[i];
        }
        if(lst[i] > 0 && lst[i] < smallest_positive) {
            smallest_positive = lst[i];
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));

    assert(issame(largest_smallest_integers({5, 3, -1, 7, 2}), {-1, 2}));

    assert(issame(largest_smallest_integers({0, 0, 0, 0, 0}), {0, 0}));

    assert(issame(largest_smallest_integers({-1, -2, -3, -4, -5}), {-1, -5}));

    assert(issame(largest_smallest_integers({1, 2, 3, 4, 5}), {5, 1}));

    return 0;
}