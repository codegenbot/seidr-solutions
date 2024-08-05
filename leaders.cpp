#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    
    for(int i=0; i<n-1; i++) {
        if(arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    result.push_back(arr[n-1]);
    
    reverse(result.begin(), result.end());
    return result;
}