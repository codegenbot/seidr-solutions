#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result;
    for(int i = 1; i <= n; ++i){
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 3}));
}