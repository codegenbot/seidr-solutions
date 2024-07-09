#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pluck(vector<int> arr) {
    vector<vector<int>> result;
    if(arr.size() == 0) {
        return {{}};
    }
    
    int minEvenValue = INT_MAX, minIndex = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if(minIndex != -1) {
        result.push_back({minEvenValue, minIndex});
    } else {
        result.push_back({});
    }
    
    return result;
}

int main() {
    vector<int> arr1 = {4,2,3};
    vector<int> arr2 = {1,2,3};
    vector<int> arr3 = {};
    vector<int> arr4 = {5, 0, 3, 0, 4, 2};

    cout << "{";
    for(int i: arr1) {
        cout << i << " ";
    }
    cout << "} -> " << pluck(arr1)[0][0] << ", " << pluck(arr1)[0][1] << endl;

    cout << "{";
    for(int i: arr2) {
        cout << i << " ";
    }
    cout << "} -> " << pluck(arr2)[0][0] << ", " << pluck(arr2)[0][1] << endl;

    cout << "{} -> " << pluck(arr3)[0][0] << ", " << pluck(arr3)[0][1] << endl;

    cout << "{";
    for(int i: arr4) {
        cout << i << " ";
    }
    cout << "} -> " << pluck(arr4)[0][0] << ", " << pluck(arr4)[0][1] << endl;

    return 0;
}