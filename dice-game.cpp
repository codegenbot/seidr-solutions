#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    double ans = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                ans += 1.0 / (n * m);
            }
        }
    }
    std::cout << ans << std::endl;
    return 0;
}