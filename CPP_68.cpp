#include <vector>
#include <climits>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minOddValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0 && arr[i] < minOddValue) {
            minOddValue = arr[i];
            minIndex = i;
        }
    }
    
    result.push_back({minOddValue, minIndex});
    return result;
}