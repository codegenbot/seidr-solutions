#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    
    // Add the top k elements to the result array
    for (int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }
    
    return result;
}

int main() {
    vector<int> arr = {-3, -4, 5};
    int k = 3;
    vector<int> res = maximum(arr, k);
    
    cout << "Maximum numbers in array: ";
    for (auto num : res) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}