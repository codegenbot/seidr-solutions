#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; --i) {
        if ((i == n - 1 || arr[i] >= arr[i + 1])) {
            result.push_back(arr[i]);
        }
    }
    result.reverse();
    return result;
}