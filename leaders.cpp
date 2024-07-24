```cpp
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& v) {
    int n = v.size();
    std::vector<int> leaders;
    
    if(n == 0) return leaders; // empty vector
    
    int lastLeaderIndex = n - 1;
    leaders.push_back(v[lastLeaderIndex]);
    
    for(int i=n-2; i>=0; i--){
        if(v[i] >= v[lastLeaderIndex]){
            leaders.push_back(v[i]);
            lastLeaderIndex = i;
        }
    }
    
    return leaders;
}

int main() {
    std::vector<int> v = {1, 3, 4, 1, 5};
    std::vector<int> leaders_vec = leaders(v);
    for(int leader: leaders_vec){
        std::cout << leader << " ";
    }
    return 0;
}