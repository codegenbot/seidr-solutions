#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    // The rightmost element is always a leader.
    result.push_back(arr[n-1]);
    
    // For each element from the second last to the first, if it's greater than or equal to all elements on its right,
    // then it's a leader and we add it to our result.
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}