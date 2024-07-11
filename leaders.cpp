#include <vector>

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    return result;