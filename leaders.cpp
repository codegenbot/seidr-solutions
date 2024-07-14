#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    return result;
}