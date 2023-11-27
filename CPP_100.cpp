#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // implementation of issame function
    // ...
    return true;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    for(int i=1; i<n; i++){
        if(i % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}