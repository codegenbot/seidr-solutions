#include <vector>
#include <cassert>

std::vector<int> issame(std::vector<int> a, std::vector<int> b, int n) {
    std::vector<int> result;
    int factorial = 1;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
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

int main() {
    assert(issame({}, {1, 2, 6}, 3));

    return 0;
}