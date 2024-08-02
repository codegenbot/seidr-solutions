#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}