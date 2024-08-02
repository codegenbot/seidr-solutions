#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> result = {1, 3};

    assert(issame(result, {1, 3}));

    return 0;
}