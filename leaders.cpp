#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    result.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[n-1])
            result.push_back(arr[i]);
        else
            break;
    }
    
    reverse(result.begin(), result.end());
    return result;
}