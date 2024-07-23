#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int n = vec.size();
    
    // The rightmost element is always a leader.
    result.push_back(vec[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(vec[i] >= vec[i+1]) {
            result.push_back(vec[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}