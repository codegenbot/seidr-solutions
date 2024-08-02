#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return {{}, 0};
    }
    
    int smallestEven = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }
    
    result.push_back({smallestEven, index});
    
    return result;
}

vector<pair<int, int>> res = pluck({4, 2, 3});
for (auto p : res) {
    cout << p.first << " " << p.second << endl;
}