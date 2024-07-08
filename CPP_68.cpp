#include <vector>
#include <climits>

using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    
    if(arr.empty()) return result; 

    int smallestEven = INT_MAX;
    int smallestIndex = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestEven != INT_MAX) {
        result.push_back(smallestEven);
        result.push_back(smallestIndex);
    } else {
        result.push_back(0);
        result.push_back(-1); 
    }
    
    return result;
}