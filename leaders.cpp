#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    
    if (n == 1) {
        result.push_back(arr[0]);
        return result;
    }
    
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    
    result.push_back(arr[n - 1]);
    
    return result;
}