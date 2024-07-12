#include <iostream>
#include <string>

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    std::cout << solve(N) << std::endl;
    assert(solve(963) == 486);
    return 0;
}