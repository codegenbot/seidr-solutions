#include <vector>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    int n = 60;
    std::vector<int> result = factorize(n);
    std::vector<int> expected{2, 2, 3, 5};
    bool same = issame(result, expected);

    return 0;
}