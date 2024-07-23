#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    int maxSoFar = arr[n-1];
    leaders.push_back(maxSoFar);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxSoFar) {
            leaders.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return leaders;
}