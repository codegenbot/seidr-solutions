#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool solve(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    assert(solve(vector<int>{1, 2, 3, 4}) == true);
    assert(solve(vector<int>{3, 4, 1, 2}) == false);

    return 0;
}