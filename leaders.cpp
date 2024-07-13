#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_seen = arr[n - 1];
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= max_seen) {
            max_seen = arr[i];
            result.push_back(max_seen);
        }
    }
    return result;
}