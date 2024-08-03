#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if(n == 1) return arr;
    
    result.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    
    std::reverse(result.begin(), result.end());
    
    return result;
}