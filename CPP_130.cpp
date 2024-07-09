#include <vector>
#include <cassert>

std::vector<int> tri(int n){
    std::vector<int> result;
    result.push_back(1);
    for(int i = 1; i < n; i++){
        result.push_back(result[i - 1] + result[i - 2]);
    }
    result.push_back(result[n - 1] + result[n - 2] + result[n - 1]);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert (issame(tri(1), {1, 3}));
    return 0;
}