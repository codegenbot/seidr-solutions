#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    // Sort the array in descending order
    sort(arr.begin(), arr.end());
    
    // Add the top k elements to the result
    for(int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }
    
    return result;
}