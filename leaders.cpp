#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 0) return res;
    
    res.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) res.push_back(arr[i]);
    }
    
    std::sort(res.begin(), res.end());
    
    return res;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 23, 19};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}