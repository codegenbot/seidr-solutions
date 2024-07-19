#include <vector>
#include <cassert>

std::vector<int> f(int n);
bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    std::vector<int> result = f(5);
    std::vector<int> expected = {1, 3, 2, 9, 4};
    
    assert(issame(result, expected));
    
    return 0;
}

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