#include <vector>
#include <cassert>

std::vector<int> tri(int n){
    std::vector<int> result(n + 1);
    result[1] = 3;
    if(n == 0) return result;
    result[2] = 1 + n / 2;
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            result[i] = 1 + i / 2;
        } else{
            result[i] = result[i - 1] + result[i - 2] + result[i + 1];
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(tri(1), {1, 3}));
    
    return 0;
}