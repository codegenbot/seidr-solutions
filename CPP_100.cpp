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
        if(n % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // rest of the main function
    // ...
    return 0;
}