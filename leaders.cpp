#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    // The rightmost element is always a leader.
    leaders.push_back(arr[n-1]);
    
    // Iterate over the array from left to right.
    for(int i=n-2; i>=0; --i) {
        if(arr[i] >= arr[i+1]) {
            leaders.push_back(arr[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}