#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 1) {
            result.push_back({arr[i], i});
        }
    }
    
    return result;
}