#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minValue = INT_MAX;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    if (minValue != INT_MAX) {
        result.push_back({minValue, minEvenIndex});
    } else {
        result.push_back({});
    }
    
    return result;
}