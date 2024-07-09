#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> unique_digits = {1, 2, 3, 4, 5};
    assert(issame(unique_digits, {1, 2, 3, 4, 5}));
}