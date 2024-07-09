```
#include <iostream>
#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

vector<int> arr;
int n, k;

void main() {
    cout << "Enter the number of elements: ";
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number of elements to sum: ";
    cin >> k;
    int result = add_elements(arr, k);
    cout << "Sum of elements: " << result << endl;
}