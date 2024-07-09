#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    int val = 1;
    for(int i=0; i<n; i++){
        result[i] = val;
        val *= 2;
    }
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 4}));
}