```cpp
#include <vector>
#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    int smallest_even = INT_MAX;  
    int smallest_index = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    result.push_back({smallest_even, smallest_index});
    
    return result;
}