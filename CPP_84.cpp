#include <iostream>
#include <string>
#include <bitset>
#include <cassert> 

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return std::bitset<sizeof(int)*8>(sum).to_string().substr(sizeof(int)*8-4);
}

int main() {
    assert(solve(963) == "10010");
    return 0;
}