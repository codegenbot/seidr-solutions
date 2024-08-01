#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<vector<int>>& arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    for(auto& innerArr : arr) {
        int minEvenValue = INT_MAX;
        int minIndex = -1;
        
        for(int i = 0; i < innerArr.size(); i++) {
            if(innerArr[i] % 2 == 0 && innerArr[i] < minEvenValue) {
                minEvenValue = innerArr[i];
                minIndex = i;
            }
        }
        
        result.push_back({minEvenValue, minIndex});
    }
    
    return result;
}