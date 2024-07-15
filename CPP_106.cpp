#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> res;
    for(int i=1; i<=n; i++){
        res.push_back(i);
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}