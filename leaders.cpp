#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    result.push_back(maxRight);
    
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}