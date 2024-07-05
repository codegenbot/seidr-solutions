#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_ones(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        }
        return ones_a < ones_b;
    });
    return arr;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    arr = sort_array(arr);
    cout << "Sorted array: ";
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}