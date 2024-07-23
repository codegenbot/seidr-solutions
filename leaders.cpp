#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

std::vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxSoFar = arr[n-1];
    result.push_back(maxSoFar);
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(maxSoFar);
        }
    }
    
    return vector<int>(result.rbegin(), result.rend());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    std::vector<int> res = leaders(arr);
    for(auto x: res) cout << x << " ";
    return 0;
}