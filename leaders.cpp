#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = 0, maxSoFar = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= maxRight) {
            if (i == arr.size() - 1 || arr[i] > maxSoFar) {
                result.push_back(arr[i]);
                maxRight = maxSoFar = arr[i];
            } else {
                maxSoFar = maxRight;
            }
        } else {
            maxSoFar = maxRight;
        }
    }
    return result;
}

int main() {
    vector<int> arr;
    arr.push_back(19);
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}