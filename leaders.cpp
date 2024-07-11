#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max_right = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 22, 20, 10, 12};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}