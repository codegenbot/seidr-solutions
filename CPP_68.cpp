#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;
    
    int smallestEven = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }
    
    if (smallestEven != INT_MAX) {
        result.push_back({smallestEven, index});
    } else {
        result.push_back({});
    }
    
    return result;
}