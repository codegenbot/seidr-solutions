#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> result;
    
    if(n == 1){
        return v;
    }
    
    for(int i=n-1; i>=0; i--){
        bool isLeader = true;
        for(int j=i+1; j<n; j++){
            if(v[j] >= v[i]){
                isLeader = false;
                break;
            }
        }
        
        if(isLeader){
            result.push_back(v[i]);
        }
    }
    
    return result;
}