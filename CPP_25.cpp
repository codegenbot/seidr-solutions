#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(std::vector<int>(a) != std::vector<int>(b)) return false;
    
    return true;
}

int contest_main(){
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}