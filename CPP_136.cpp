#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

vector<int> largest_smallest_integers(vector<int> lst);

bool issame(vector<int> a, vector<int> b) {
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

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0);
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > largestNegative) {
            largestNegative = num;
        }
        else if (num > 0 && num < smallestPositive) {
            smallestPositive = num;
        }
    }

    result[0] = largestNegative;
    result[1] = smallestPositive;

    return result;
}