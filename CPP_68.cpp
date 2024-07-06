#include<vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return {{}};
    }
    
    pair<int, int> smallestEven = {{}, INT_MAX};
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven.first) {
            smallestEven = {{arr[i], i}};
        } else if (arr[i] % 2 == 0 && arr[i] == smallestEven.first) {
            smallestEven = {{arr[i], i}};
        }
    }
    
    result.push_back(smallestEven);
    return result;
}