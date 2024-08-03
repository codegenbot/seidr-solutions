#include <vector>
#include <climits>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    
    if(arr.empty()) return {{}}; // If array is empty, return an empty pair
    
    int smallestEven = INT_MAX;
    int index = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }
    
    result.push_back({{smallestEven, index}});
    
    return result;
}