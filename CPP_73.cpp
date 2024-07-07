```cpp
#include <iostream>
#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }

    for (int i = left; i <= right; i++) {
        if (arr[i] != arr[arr.size() - 1 - i]) {
            changes++;
        }
    }

    return changes;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        arr.push_back(x);
    }

    cout << "Smallest change: " << smallest_change(arr) << endl;

    return 0;
}