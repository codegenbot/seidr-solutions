Here is the completed code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    if(k >= arr.size())
        result = sort_arr(arr);
    else
        result = max_k_numbers(arr, k);

    return result;
}

vector<int> sort_arr(vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    return sortedArr;
}

vector<int> max_k_numbers(vector<int>& arr, int k) {
    vector<int> result(arr.size() - k);
    partial_sort(arr.begin(), arr.end()-k, arr.end());
    for(int i = 0; i < (arr.size() - k); i++)
        result[i] = arr[arr.size() - 1 -i];
    return result;
}

int main() {
    vector<int> arr = {-3, -4, 5};
    int k = 3;
    
    cout << "Input: arr = {" << -3 << ", " << -4 << ", " << 5 <<"}, k = " << k << endl;
    cout << "Output: ";
    for(int i : maximum(arr, k))
        cout << i << " ";
    return 0;
}