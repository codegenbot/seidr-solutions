#include <bits/stdc++.h>
using namespace std;

int add_elements(vector<int> arr, size_t k) {
    int sum = 0;
    for (size_t i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main_function() {
    vector<int> arr;
    size_t k;
    
    cout << "Enter the number of elements: ";
    cin >> k;
    for (size_t i = 0; i < k; i++) {
        cout << "Enter element " << i + 1 << ": ";
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int result = add_elements(arr, k);
    
    cout << "Sum of elements: " << result << endl;
    
    return 0;
}