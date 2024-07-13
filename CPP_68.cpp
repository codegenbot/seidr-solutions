#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return result;
    }
    
    pair<int, int> smallest = {INT_MAX, -1};
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest.first) {
            smallest = {{arr[i]}, {i}};
        }
    }
    
    result.push_back(smallest);
    
    return result;
}