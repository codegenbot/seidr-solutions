#include <iostream>
#include <bitset>
#include <cassert>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return bitset<32>(sum).to_string().substr(32 - 4);
}

int main() {
    assert(solve(963) == "1001");
    return 0;
}