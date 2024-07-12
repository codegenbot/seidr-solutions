```cpp
#include <iostream>
#include <assert.h>

int solve(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}

int main() {
    std::string N;
    std::cin >> N;
    int n = stoi(N);
    std::cout << solve(n) << std::endl;

    assert(solve(963) == 483); 
    return 0;
}