#include <vector>
#include <cassert>

std::vector<int> f(int n);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n){
    std::vector<int> result;
    int sum = 0;
    int factorial = 1;
    
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> res1 = f(5);
    std::vector<int> res2 = f(5);
    
    assert(issame(res1, res2));
    
    return 0;
}