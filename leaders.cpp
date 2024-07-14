#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(i == n - 1 || arr[i] >= lastLeader) {
            res.push_back(arr[i]);
            lastLeader = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    vector<int> res = leaders(arr);
    for(int i:res) {
        cout << i << " ";
    }
    return 0;
}