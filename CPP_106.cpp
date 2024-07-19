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
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<int> x = f(5);
    std::vector<int> y = f(5);
    
    if (issame(x, y)) {
        return 0;
    } else {
        return 1;
    }
}