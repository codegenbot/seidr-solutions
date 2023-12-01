#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0 && lst[i] > largestNegative) {
            largestNegative = lst[i];
        }
        if (lst[i] > 0 && lst[i] < smallestPositive) {
            smallestPositive = lst[i];
        }
    }

    return { largestNegative, smallestPositive };
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}