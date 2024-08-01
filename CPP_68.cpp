#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<int> result;
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if (minIndex != -1) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    } else {
        result.push_back({});
    }
    
    return {result};
}