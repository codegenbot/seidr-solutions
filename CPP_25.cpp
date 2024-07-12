#include <vector>
#include <cassert>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}

void issame(std::vector<int> vec1, std::vector<int> vec2){
    assert(vec1 == vec2);
}

int main() {
    issame(factorize(3 * 2 * 3) , {2, 3, 3});

    return 0;
}