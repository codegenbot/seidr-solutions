#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    vector<pair<int, int>> evenNodes;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0) {
            evenNodes.push_back({arr[i], i});
        }
    }
    
    if(evenNodes.empty()) return result;
    
    sort(evenNodes.begin(), evenNodes.end());
    
    result.push_back({evenNodes[0].first, evenNodes[0].second});
    
    return result;
}