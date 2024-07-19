#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            result[i - 1] = factorial;
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i - 1] = sum;
        }
    }
    return result;
}

int main() {
    // Test the f function
    assert(issame(f(3), {1, 3, 2}));
    assert(issame(f(0), {}));
    assert(issame(f(5), {1, 3, 2, 10, 5}));

    return 0;
}