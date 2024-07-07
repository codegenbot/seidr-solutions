#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    
    if (arr.empty()) return {{}};
    
    int minEvenValue = INT_MAX;
    int index = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            index = i;
        }
    }
    
    result.push_back({minEvenValue, index});
    
    return result;
}