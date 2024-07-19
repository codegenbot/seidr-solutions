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

std::vector<int> tri(int value) {
    return std::vector<int>{value};
}

std::vector<int> completeCode(int n){
    std::vector<int> result;
    
    if(n == 0){
        result.push_back(0);
    } else if(n == 1){
        result.push_back(3);
    } else {
        result.push_back(1);
        result.push_back(3);
        for(int i = 2; i <= n; ++i){
            if(i % 2 == 0){
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i + 1]);
            }
        }
    }
    
    return result;
}

int main() {
    assert(issame(tri(1), std::vector<int>{1, 3}));
    
    return 0;
}