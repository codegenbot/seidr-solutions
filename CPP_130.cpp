#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> tri(int n){
    std::vector<int> tribonacci(n+1);
    tribonacci[0] = 3;
    if(n > 0) tribonacci[1] = 1;
    if(n > 1) tribonacci[2] = 3;
    
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            tribonacci[i] = 1 + i / 2;
        } else {
            tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3];
        }
    }
    
    return tribonacci;
}

int main(){
    assert(issame(tri(1), {3, 1}));
    return 0;
}