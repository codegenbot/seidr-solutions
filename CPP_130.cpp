#include <vector>
#include <cassert>

bool issame(const std::vector<int> &a, const std::vector<int> &b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> yourFunctionName(int n){
    std::vector<int> tri(n, 0);
    return tri;
}

int main(){
    int n = 2;
    std::vector<int> tri = yourFunctionName(n);
    assert(issame(tri, {0, 0}));
    return 0;
}