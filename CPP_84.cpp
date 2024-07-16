#include <iostream>
#include <bitset>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::bitset<8>(sum).to_string().substr(8 - __builtin_clz(sum));
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}