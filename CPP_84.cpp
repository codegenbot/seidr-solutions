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
    char input[100];
    std::cin.getline(input, 100);
    int N = std::stoi(input);
    std::cout << solve(N) << std::endl;

    assert(solve(963) == 483); 
    return 0;
}