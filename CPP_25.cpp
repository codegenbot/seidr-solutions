#include <vector>
#include <cassert>

std::vector<int> factorize(int num) {
    std::vector<int> factors;
    
    for(int i = 2; i <= num; ++i) {
        while(num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    return 0;
}