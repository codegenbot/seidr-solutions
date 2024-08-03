#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()){
        return false;
    }
    
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    for(int i = 0; i < n; i++) {
        result[i] = (i % 2 == 0) ? (i == 0 ? 1 : result[i-1] * i) : (i * (i + 1) / 2);
    }
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}