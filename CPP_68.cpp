#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr);

int main() {
    vector<int> arr;
    cout << "Enter elements of array (space-separated integers): ";
    for(int i; cin >> i; ) arr.push_back(i);
    
    vector<pair<int, int>> result = pluck(arr);

    if(!result.empty()) {
        cout << "Minimum even element: " << result[0].first
             << ", found at index: " << result[0].second << endl;
    } else cout << "Array is empty!" << endl;

    return 0;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back({minEven, minIndex});

    return result;
}