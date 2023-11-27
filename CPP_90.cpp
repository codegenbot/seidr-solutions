#include <vector>
#include <cassert>
#include <algorithm>
#include <climits>

int next_smallest(vector<int> lst) {
    assert(lst.size() >= 2);

    sort(lst.begin(), lst.end());

    int smallest = lst[0];
    int second_smallest = lst[1];

    if (smallest == second_smallest) {
        return INT_MIN;
    }

    return second_smallest;
}