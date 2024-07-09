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
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    for(int i=n-1; i>=0; i--) {
        if (result.empty() || arr[i] >= result.back()) 
            result.push_back(arr[i]);
    }
    return result;
}