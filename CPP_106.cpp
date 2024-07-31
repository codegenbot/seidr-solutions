#include <vector>
#include <cassert>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2){
    if(vec1.size() != vec2.size()){
        return false;
    }
    
    for(size_t i = 0; i < vec1.size(); ++i){
        if(vec1[i] != vec2[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            int fact = 1;
            for(int j = 1; j <= i; ++j){
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; ++j){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}