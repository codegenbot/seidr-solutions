#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightSoFar = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    return result;
}