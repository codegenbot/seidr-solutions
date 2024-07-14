#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    if(n == 0) return res;
    
    res.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) res.push_back(arr[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}