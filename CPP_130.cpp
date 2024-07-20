#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(size_t i=0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> yourFunctionName(int n) {
    return std::vector<int>(n, 0);
}

int main(){
    std::vector<int> tri;

    tri = yourFunctionName(2);

    assert(issame(tri, {0, 0}));

    return 0;
}