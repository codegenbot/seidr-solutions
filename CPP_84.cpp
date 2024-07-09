#include <string>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    std::string binary = "";
    while (sum > 0) {
        binary = std::to_string(sum % 2) + binary;
        sum /= 2;
    }
    return binary;
}

int main() {
    // Input
    int N;
    std::cin >> N;

    // Output
    std::cout << solve(N);

    return 0;
}