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
    // All test cases should pass
    assert(smallest_change({0, 1}) == 1);
    assert(smallest_change({1, 2, 3, 2, 1}) == 0);
    assert(smallest_change({1, 2, 3, 4, 5}) == 2);
    cout << "All test cases pass" << endl;

    // Read inputs
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Smallest changes needed: " << smallest_change(arr) << endl;
    return 0;
}