#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        while(i<n-1 && arr[i] <= arr[n-1]) {
            n--;
        }
        res.push_back(arr[i]);
    }
    
    return res;
}