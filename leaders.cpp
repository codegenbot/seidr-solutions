#include <vector>
using namespace std;

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> leaders;
    
    if(n == 1) return {v[0]};
    
    for(int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for(int j = i + 1; j < n; j++) {
            if(v[j] >= v[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) leaders.push_back(v[i]);
    }
    
    return leaders;
}