#include <iostream>
#include <string>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::to_string(sum);
}

int main() {
    int N;
    std::cin >> N;
    std::cout << solve(N) << std::endl;
    return 0;
}