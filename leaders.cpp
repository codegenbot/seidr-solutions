#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    result.push_back(arr[n-1]);  //rightmost element is always a leader.
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
}