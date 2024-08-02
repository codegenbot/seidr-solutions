#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return {{}};
    
    int minEvenValue = INT_MAX;
    int minValueIndex = -1;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minValueIndex = i;
        }
    }
    
    result = {{minEvenValue, minValueIndex}};
    
    return result;
}