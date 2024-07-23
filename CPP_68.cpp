#include <vector>
#include <climits>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minEvenValue = INT_MAX;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    if(minEvenValue != INT_MAX) {
        result.push_back({minEvenValue, minEvenIndex});
    }
    
    return result;
}