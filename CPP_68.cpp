#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if (minIndex != -1) {
        result.push_back({minEvenValue, minIndex});
    } else {
        result.push_back({0, -1});
    }
    
    return result;
}

int main() {
    vector<int> arr = {4, 2, 3};
    vector<pair<int, int>> res = pluck(arr);
    for (auto p : res) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}