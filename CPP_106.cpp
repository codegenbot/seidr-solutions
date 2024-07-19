#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result;
    int sum = 0;
    int fact = 1;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            fact *= i;
            result.push_back(fact);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}

int main(){
    std::vector<int> test1 = f(5);
    std::vector<int> test2 = {1, 2, 3, 6, 5};
    
    assert(issame(test1, test2));
    
    return 0;
}