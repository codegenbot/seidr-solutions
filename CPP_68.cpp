#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if(arr.empty()) return result; // Handle empty array
    
    int smallestEvenIndex = -1;
    int smallestEvenValue = INT_MAX;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenIndex = i;
            smallestEvenValue = arr[i];
        }
    }
    
    if(smallestEvenIndex != -1) {
        result.push_back({smallestEvenValue, smallestEvenIndex});
    } else {
        result.push_back({0, 0}); // or any other default value
    }
    
    return result;
}

int main() {
    vector<int> arr = {4,2,3};
    vector<pair<int, int>> result = pluck(arr);
    
    for(auto p : result) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
    
    return 0;
}