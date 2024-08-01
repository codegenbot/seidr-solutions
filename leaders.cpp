#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 1) return {arr[0]};
    
    for(int i=n-2; i>=0; i--) {
        while(i<n-1 && arr[i] >= arr[n-1]) {
            n--;
        }
        res.push_back(arr[n-1]);
    }
    
    reverse(res.begin(), res.end());
    return res;
}