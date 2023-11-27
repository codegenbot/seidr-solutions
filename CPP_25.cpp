#include <vector>
#include <cassert>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int problem_solution() {
    std::vector<int> factors = factorize(3 * 2 * 3);
    std::vector<int> expected_factors = {2, 3, 3};
    assert(issame(factors, expected_factors));

    return 0;
}

int main() {
    problem_solution();
    return 0;
}