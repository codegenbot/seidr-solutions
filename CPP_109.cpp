#include <iostream>
#include <vector>
#include <algorithm>

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
    assert(solve({}) == true);
    return 0;
}