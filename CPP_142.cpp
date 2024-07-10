```
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    std::cout << sum << std::endl;
    return 0;
}