#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    // Sort the array in descending order
    sort(arr.begin(), arr.end());
    
    // Create a new vector with the first 'k' elements of the sorted array
    for (int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> output = maximum(arr, k);

    cout << "{";
    for (int i = 0; i < k; i++) {
        cout << output[i] << " ";
    }
    cout << "}\n";

    return 0;
}