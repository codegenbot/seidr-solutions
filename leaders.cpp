#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (result.empty() || arr[i] >= result.back()) {
            result.push_back(arr[i]);
        }
    }
    return result;
}