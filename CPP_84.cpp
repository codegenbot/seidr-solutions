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
    std::string input;
    std::cin >> input;
    int N = std::stoi(input);
    std::cout << solve(N) << std::endl;

    assert(solve(963) == 483); 
    return 0;
}