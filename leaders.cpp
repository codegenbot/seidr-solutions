#include <vector>
#include <iostream>

using namespace std;

int currentMax = INT_MAX;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= currentMax) {
            res.push_back(arr[i]);
            currentMax = arr[i];
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