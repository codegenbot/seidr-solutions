#include <vector>
#include <climits>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if (minIndex != -1) {
        result.push_back({{minEvenValue}, {minIndex}});
    } else {
        result.push_back({});
    }
    
    return result;
}