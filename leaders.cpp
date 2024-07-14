#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if (n == 1) {
        leaders.push_back(arr[0]);
        return leaders;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}