#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if(arr.empty()) return result; // Check for empty array
    
    int minEvenValue = INT_MAX;
    int index = -1;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) { 
            minEvenValue = arr[i]; 
            index = i; 
        }
    }
    
    result.push_back({minEvenValue, index});
    return result;
}

int main() {
    vector<int> nodes = {4,2,3};
    vector<pair<int, int>> res = pluck(nodes);
    for(auto p: res) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}