#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    
    // Return the first k elements of the sorted array
    for (int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }
    
    return result;
}