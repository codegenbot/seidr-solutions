#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= i; ++j){
                factorial *= j;
            }
            result[i-1] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; ++j){
                sum += j;
            }
            result[i-1] = sum;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    assert(a.size() == b.size());

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    // Add your testing logic here
    return 0;
}