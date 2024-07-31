#include <vector>
#include <cassert>

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i % 2 == 0 ? [] (int factorial = 1) {
            for (int j = 1; j <= i; j++)
                factorial *= j;
            return factorial;
        }() : [] (int sum = 0) {
            for (int j = 1; j <= i; j++)
                sum += j;
            return sum;
        }());
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(f(3), std::vector<int>{1, 3, 6}));
}
