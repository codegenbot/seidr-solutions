#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return {};
    
    pair<int, int> smallestEven = {INT_MAX, -1};
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven.first) {
            smallestEven.first = arr[i];
            smallestEven.second = i;
        }
    }
    
    result.push_back(smallestEven);
    
    return result;
}

int main() {
    vector<int> arr1 = {4, 2, 3};
    vector<pair<int, int>> result1 = pluck(arr1);
    
    for(auto pair : result1) {
        cout << "Plucked node: {" << pair.first << ", " << pair.second << "}" << endl;
    }
    
    return 0;
}