#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < maxRightSoFar) {
            continue;
        }
        maxRightSoFar = arr[i];
        result.push_back(maxRightSoFar);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}