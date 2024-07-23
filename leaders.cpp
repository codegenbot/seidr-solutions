#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = {12, 10, 8, 6};
    vector<int> res = leaders(arr);
    cout << "Leaders: ";
    for (int leader : res) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}