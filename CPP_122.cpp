#include <iostream>
#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (to_string(arr[i]).size() <= 2) {
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
    
    for(int i = 0; i < n; ++i) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter k: ";
    cin >> k;
    
    int result = add_elements(arr, k);
    cout << "Sum of elements less than or equal to 2 digits is: " << result << endl;
    
    return 0;
}