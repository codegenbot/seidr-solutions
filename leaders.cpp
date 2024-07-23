#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRightSoFar = 0;
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    reverse(result.begin(), result.end()); 
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersResult = leaders(arr);
    for (auto x : leadersResult) {
        cout << x << " ";
    }
    return 0;
}