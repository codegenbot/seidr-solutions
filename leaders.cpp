#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for (int i = 0; i < n; i++) {
        int rightMax = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > rightMax) {
                rightMax = arr[j];
                break;
            }
        }
        
        if (rightMax >= arr[n - 1 - i]) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}