#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    result[0] = 1;
    int sum = 0;
    int factorial = 1;

    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result[i] = factorial;
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