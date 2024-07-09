#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxright = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxright) {
            result.push_back(arr[i]);
            maxright = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}