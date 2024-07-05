#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    int n;
    cin >> n;
    assert(n >= 0); // Ensure non-negative size

    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << smallest_change(arr) << endl;
    return 0;
}