#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size())
        return false;

    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> f(int n){
    std::vector<int> res(n);
    for(int i = 0; i < n; ++i){
        res[i] = i + 1;
    }
    return res;
}

int main(){
    assert(issame(f(3), {1, 2, 3}));

    return 0;
}