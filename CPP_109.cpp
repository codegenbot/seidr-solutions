
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        vector<int> arr_copy = arr;
        rotate(arr_copy.begin(), arr_copy.begin() + 1, arr_copy.end());

        if (is_sorted(arr_copy.begin(), arr_copy.end())) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool result = move_one_ball(arr);

    cout << (result ? "true" : "false") << endl;

    return 0;
}