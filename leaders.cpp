#include <vector>

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int lastLeader = -1;
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] >= lastLeader) {
            result.push_back(arr[i]);
            lastLeader = arr[i];
        }
    }
    return result;
}