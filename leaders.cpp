#include <vector>

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    for(int i=n-1; i>=0; i--){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(v[j] >= v[i]){
                leader = false;
                break;
            }
        }
        if(leader) leaders.push_back(v[i]);
    }
    
    return leaders;
}