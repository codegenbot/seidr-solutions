#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool solve(vector<int>& arr) {
    int n = arr.size();
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    for (int i = 0; i < n; ++i) {
        if (arr == sortedArr) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    assert(solve({1, 2, 3, 4}) == true);
    assert(solve({3, 4, 1, 2}) == false);

    return 0;
}