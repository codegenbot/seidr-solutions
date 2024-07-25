#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int>& arr) {
    vector<vector<int>> result;
    
    if (arr.empty()) return result;
    
    int minEvenValue = INT_MAX, minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if (minEvenValue != INT_MAX) {
        result = {{minEvenValue, minIndex}};
    } else {
        result = {};
    }
    
    return result;
}