#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n==0) return res;
    res.push_back(arr[n-1]);
    for(int i=n-2; i>=0; --i){
        bool leader = true;
        for(int j=i+1; j<n; ++j++){
            if(arr[j] >= arr[i]){
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}