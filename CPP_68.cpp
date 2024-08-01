```#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return {{-1, -1}}; // Return a pair with -1 values as there are no even values
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0) {
            result.push_back({arr[i], i});
        }
    }
    
    return result;
}```