#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int minEvenVal = INT_MAX;
    int minEvenIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenVal != INT_MAX) {
        result.push_back({minEvenVal, minEvenIndex});
    }

    return result;
}