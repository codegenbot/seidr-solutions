#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leader(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRight = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leader(arr);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}