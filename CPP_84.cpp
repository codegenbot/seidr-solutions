#include <iostream>
#include <string>
#include <bitset>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::bitset<sizeof(int)*8>(sum).to_string();
}

int main() {
    // Test cases
    std::cout << solve(963) << std::endl; // Output: 10010
    return 0;
}