#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) {
        return {{}};
    }
    
    int smallest_even = INT_MAX;
    int index = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }
    
    result.push_back({smallest_even, index});
    
    return result;
}