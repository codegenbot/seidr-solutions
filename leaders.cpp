#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;
    
    for(int i=0; i<n; ++i){
        bool leaderCheck = true;
        for(int j=i+1; j<n; ++j){
            if(arr[j] >= arr[i]){
                leaderCheck = false;
                break;
            }
        }
        if(leaderCheck) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = {18, 591, 547, 54, 773, 507, 959, 32, 183, 899, 283, 477, 864, 28, 681, 572, 910, 983, 777};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}