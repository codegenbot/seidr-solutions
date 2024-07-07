#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    
    // Check if the array is empty
    if (arr.empty()) {
        return {{}};
    }
    
    int smallest_even = INT_MAX; // Initialize with a large value
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) { // Check if the node is even and smaller than the current smallest
            smallest_even = arr[i]; // Update the smallest even value
            result = {{smallest_even, i}}; // Update the result vector with the smallest even value and its index
        }
    }
    
    return result;
}

int main() {
    vector<int> arr1 = {4, 2, 3};
    vector<int> arr2 = {1, 2, 3};
    vector<int> arr3 = {};
    vector<int> arr4 = {5, 0, 3, 0, 4, 2};
    
    cout << "Example 1: " << endl;
    for (int i : pluck(arr1)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Example 2: " << endl;
    for (int i : pluck(arr2)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Example 3: " << endl;
    for (int i : pluck(arr3)) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Example 4: " << endl;
    for (int i : pluck(arr4)) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}