#include<vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return result;
    
    int smallest_even = INT_MAX;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            result = {{smallest_even, i}};
        } else if(arr[i] % 2 == 0 && arr[i] == smallest_even) {
            result.push_back({{arr[i], i}});
        }
    }
    
    return result;
}