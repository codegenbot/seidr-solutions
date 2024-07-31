#include <vector>
#include <cassert>

std::vector<int> f(int n);

bool issame(std::vector<int> a, std::vector<int> b){
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

std::vector<int> f(int n){
    std::vector<int> result(n);
    int sum = 0;
    int factorial = 1;
    
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(i == 0)
                result[i] = 1;
            else{
                factorial *= i;
                result[i] = factorial;
            }
        }
        else{
            sum += i;
            result[i] = sum;
        }
    }
    
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}