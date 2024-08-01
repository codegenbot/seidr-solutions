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
    
    vector<int> subResult;
    if (minIndex != -1) {
        subResult.push_back(minEvenValue);
        subResult.push_back(minIndex);
    } else {
        subResult.push_back({});
    }
    
    result.push_back(subResult);
    
    return result;
}