#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return {{}};
    
    int minEvenVal = INT_MAX, minIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }
    
    if (minEvenVal == INT_MAX) return {{}};
    
    result = {{minEvenVal, minIndex}};
    return result;
}