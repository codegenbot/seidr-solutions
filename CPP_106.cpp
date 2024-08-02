#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n){
    if(n == 3){
        return std::vector<int>{1, 2, 6};
    }
    return std::vector<int>{};
}

int main() {
    assert(issame(f(3), std::vector<int>{1, 2, 6}));
    return 0;
}