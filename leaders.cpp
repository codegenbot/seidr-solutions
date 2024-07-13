#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_seen = arr.back(); // Store the last element as the initial maximum

    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= max_seen) {
            result.push_back(arr[i]);
            max_seen = arr[i]; // Update the maximum
        }
    }

    return result;
}