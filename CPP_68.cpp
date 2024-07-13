#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return {{}, 0};
    }
    
    int smallestEven = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestEven == INT_MAX) {
        return {{}, 0};
    }
    
    result.push_back({smallestEven, smallestIndex});
    
    return result;
}