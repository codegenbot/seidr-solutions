#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result(n);
    int factorial = 1, sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            factorial *= (i + 1);
            result[i] = factorial;
        } else {
            sum += (i + 1);
            result[i] = sum;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}