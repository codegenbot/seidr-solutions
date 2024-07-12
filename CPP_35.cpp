#include <algorithm>
#include <vector>

int findMaxDiff(int arr[], int n) {
    vector<int> l(arr, arr+n);
    return abs(*max_element(l.begin(), l.end())- *max_element(vector<int>(l.begin(), l.end()).begin(), (vector<int>(l.begin(), l.end())).end());
}