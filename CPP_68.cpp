#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<vector<int>>& arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    for(int i = 0; i < arr.size(); i++) {
        bool hasEvenValue = false;
        
        for(int j = 0; j < arr[i].size(); j++) {
            if(arr[i][j] % 2 == 0) {
                hasEvenValue = true;
                break;
            }
        }
        
        if(!hasEvenValue) {
            result.push_back({i, i});
        }
    }
    
    return result;
}