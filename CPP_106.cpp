#include <vector>
#include <cassert>

std::vector<int> f(int n);

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

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

int main() {
    std::vector<int> result = f(5);
    std::vector<int> expected = {1, 3, 2, 10, 3};
    
    assert(issame(result, expected));
    
    return 0;
}