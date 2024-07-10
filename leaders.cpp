#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> result;
    int n = v.size();
    if(n == 0) return result;
    
    for(int i = n-1; i >= 0; i--){
        bool isLeader = true;
        for(int j = i+1; j < n; j++){
            if(v[j] >= v[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(v[i]);
    }
    
    return result;
}