```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> arr,int k){
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    if (k > arr.size()) {
        cout << "Error: k is greater than the size of array." << endl;
        return vector<int>();
    }
    
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}