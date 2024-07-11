#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) {
        return {{}, 0};
    }
    
    int smallest = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallest != INT_MAX) {
        result.push_back({smallest, smallestIndex});
    } else {
        result.push_back({0, -1});
    }
    
    return result;
}