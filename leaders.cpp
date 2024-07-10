#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for(int i=0; i<n; i++) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}