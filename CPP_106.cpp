#include <vector>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= a[0]; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

assert(issame(f(3), {1, 2, 6}));