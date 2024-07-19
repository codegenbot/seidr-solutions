#include <vector>
#include <cassert>

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

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 0; i < n; ++i){
        if((i+1) % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= (i + 1); ++j){
                factorial *= j;
            }
            result[i] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= (i + 1); ++j){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main(){
    // Add your test cases here to check the functions
    return 0;
}