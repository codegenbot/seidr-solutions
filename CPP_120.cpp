#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> maximum(std::vector<int> a, int k){
    std::sort(a.begin(), a.end());
    if(k >= a.size()){
        return {};
    }
    return std::vector<int>(a.end() - k, a.end());
}

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}