#include <vector>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> result = factorize(n);
    for (int factor : result) {
        std::cout << factor << " ";
    }
    return 0;
}