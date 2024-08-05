#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result(n);
    result[0] = 1;
    int sum = 0;
    int factorial = 1;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result[i - 1] = factorial;
        } else {
            sum += i;
            result[i - 1] = sum;
        }
    }
    
    return result;
}

int main() {
    // Your main function logic here
    return 0;
}