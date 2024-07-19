#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int factorial = 1;
    int sum = 0;
    int n = a.size();
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return (result == b);
}

std::vector<int> f = {1, 2, 6};
assert(issame(f, {1, 2, 6}));