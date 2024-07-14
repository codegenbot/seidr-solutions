#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=0; i<n; i++) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        
        if(isLeader) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    res.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            res.push_front(arr[i]);
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