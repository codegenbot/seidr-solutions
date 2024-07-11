#include <vector>

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            result.push_back(i);
    }
    std::sort(result.begin(), result.end());
    return result;
}