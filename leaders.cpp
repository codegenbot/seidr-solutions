#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;
    int leader = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= leader){
            leader = arr[i];
        }
    }
    res.push_back(leader);
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
    vector<int> arr = {17, 28, 4};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}