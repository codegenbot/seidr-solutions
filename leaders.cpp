#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    if(n == 1)
        return arr;
        
    for(int i=n-2; i>=0; i--) {
        while(i > n-arr[i+1]-1 && i > 0) {
            i--;
        }
        res.push_back(arr[i]);
    }
    
    res.push_back(arr[n-1]);
    
    return res;
}