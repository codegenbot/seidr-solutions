#include<vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) {
        return {{}};
    }
    
    int smallestEven = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
        } else if (arr[i] % 2 == 0 && arr[i] == smallestEven) {
            result.push_back({arr[i], i});
        }
    }
    
    if (!result.empty()) {
        sort(result.begin(), result.end());
        return {{result[0].first, result[0].second}};
    } else {
        return {{}};
    }
}