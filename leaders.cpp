#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    // rightmost element is always a leader
    if(n > 0) {
        result.push_back(arr[n-1]);
    }
    
    for(int i = n - 2; i >= 0; --i) {
        bool leaderFound = false;
        for(int j = i+1; j < n; ++j) {
            if(arr[j] >= arr[i]) {
                leaderFound = true;
                break;
            }
        }
        
        if(leaderFound) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}