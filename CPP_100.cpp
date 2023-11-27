#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    int num_stones = n;
    stones.push_back(num_stones);
    
    for(int i=1; i<n; i++){
        if(num_stones % 2 == 0){
            num_stones += 2;
        }
        else{
            num_stones += 1;
        }
        stones.push_back(num_stones);
    }
    
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    std::cout << "Assertion passed!" << std::endl;
    
    return 0;
}