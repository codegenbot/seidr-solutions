#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    int sum = 0;
    int factorial = 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (i == 0) {
                result[i] = 1;
            } else {
                factorial *= i;
                result[i] = factorial;
            }
        } else {
            sum += i;
            result[i] = sum;
        }
    }
    
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}