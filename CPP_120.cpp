#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    // your logic to check if vectors are same goes here
}

vector<int> maximum(vector<int> arr, int k) {
    if(k > arr.size()) {
        cout << "Invalid value of k. It must be less than or equal to the size of array." << endl;
        return {};
    }
    
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}