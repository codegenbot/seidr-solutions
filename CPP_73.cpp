#include <iostream>
#include <vector>

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
    vector<int> arr;
    int n, elem;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elem;
        arr.push_back(elem);
    }
    cout << smallest_change(arr) << endl;
    return 0;
}