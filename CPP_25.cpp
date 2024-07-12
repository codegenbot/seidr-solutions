#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> expected_factors = {2, 2, 3, 5};
    assert(factorize(60) == expected_factors);
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}