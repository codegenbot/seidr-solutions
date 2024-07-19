#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int next_smallest(vector<int> lst) {
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