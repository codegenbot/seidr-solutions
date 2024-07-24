```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> leaders_vec = leaders(v);
    return 0;
}

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    if(n == 0) return leaders;
    
    leaders.push_back(v[n-1]);
    
    for(int i=n-2; i>=0; i--){
        if(v[i] > leaders.back()){
            leaders.push_back(v[i]);
        }
    }
    
    return leaders;
}