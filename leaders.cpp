#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRightSoFar = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    return vector<int>(result.rbegin(), result.rend());
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}