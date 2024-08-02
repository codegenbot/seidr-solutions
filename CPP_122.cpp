#include <iostream>
#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> arr;
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> k;
        arr.push_back(k);
    }
    cout << "Sum of elements that are not more than 2 digits is: " << add_elements(arr, n) << endl;
    return 0;
}