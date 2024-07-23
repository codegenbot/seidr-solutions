#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRightSoFar = arr.back();
    for(int i = 0; i < arr.size(); i++) {
        if(i == arr.size() - 1 || arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
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