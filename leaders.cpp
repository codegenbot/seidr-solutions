#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxRight = arr.back();  // last element of array
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i];  // update maxRight
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    using namespace std; 
    vector<int> result = leaders(arr);
    for(int num : result) cout << num << " ";
    return 0;
}