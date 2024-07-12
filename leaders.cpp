#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (i == arr.size() - 1 || arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    return result;
}