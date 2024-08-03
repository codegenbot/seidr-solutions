#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool is_leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                is_leader = false;
                break;
            }
        }
        if(is_leader) res.push_back(arr[i]);
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}