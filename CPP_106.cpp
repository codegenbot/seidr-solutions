#include <vector>
#include <cassert>

std::vector<int> f(int n);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> result = f(n);
    
    std::vector<int> expected;
    // calculate expected result based on the problem description
    
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