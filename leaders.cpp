#include <iostream>
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

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> leaders_vec = leaders(v);
    for(int i: leaders_vec){
        std::cout << i << " ";
    }
    return 0;
}