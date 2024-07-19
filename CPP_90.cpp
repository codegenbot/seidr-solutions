#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int next_smallest(vector<int>& lst) {
    sort(lst.begin(), lst.end());
    int count = 0, prev = INT_MIN;
    for (auto num : lst) {
        if (num != prev) {
            count++;
            prev = num;
        }
        if (count == 2) {
            return num;
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}