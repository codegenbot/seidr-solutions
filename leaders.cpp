#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    return result;
}