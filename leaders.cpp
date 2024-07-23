#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int maxRight = 0;
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            if (i == arr.size() - 1 || arr[i] > arr[i + 1]) {
                result.push_back(arr[i]);
            }
            maxRight = arr[i];
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