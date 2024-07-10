#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for(int i = 0; i < k; i++) {
        auto it = max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;

}

int mainFunction() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "[";
    for(int i = 0; i < k; i++) cout << maximum(arr, 1)[i] << " ";
    cout << "]";

    return 0;
}