#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        
        for (int j = i + 1; j <= n - 1; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}