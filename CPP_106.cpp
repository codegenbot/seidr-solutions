#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result;
    for(int i = 1; i <= n; ++i){
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
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

int main(){
    std::vector<int> test1 = f(5);
    std::vector<int> expected = {1, 2, 3, 4, 5};
    assert(issame(test1, expected));
    
    std::vector<int> test2 = f(3);
    std::vector<int> expected2 = {1, 2, 3};
    assert(issame(test2, expected2));
    
    return 0;
}