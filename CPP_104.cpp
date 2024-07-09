#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> unique_digits = {1, 2, 3, 4, 5};
    return a == b;
}

int main(){
    assert(issame({1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}));
}