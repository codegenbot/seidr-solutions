#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0)
        return result;
    
    int lastLeaderIndex = n - 1; 
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[lastLeaderIndex]) {
            lastLeaderIndex = i;
            result.push_back(arr[lastLeaderIndex]);
        }
    }
    
    return result;
}

vector<int> arr = {12, 10, 8, 6};
vector<int> result = leaders(arr);
for (int i : result) {
    cout << i << " ";
}
return 0;