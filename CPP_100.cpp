#include <cassert>
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& stones){
    for(int i=0; i<stones.size()-1; i++){
        if(stones[i] != stones[i+1]){
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main(){
    std::vector<int> result = make_a_pile(8);
    assert(issame(result));
    
    return 0;
}