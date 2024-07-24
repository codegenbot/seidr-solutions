```cpp
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    if(n == 0) return leaders; // handle the edge case
    
    leaders.push_back(v[n-1]); // rightmost element is always a leader
    
    for(int i=n-2; i>=0; i--){
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
    for(int i: leaders_vec) std::cout << i << " ";
    return 0;
}