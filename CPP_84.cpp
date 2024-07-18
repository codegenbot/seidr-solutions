#include <iostream>
#include <string>
#include <bitset>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - sum);
}

int main() {
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    
    std::cout << "Output: " << solve(num) << std::endl;
    
    return 0;
}