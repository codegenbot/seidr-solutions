#include <cassert>
#include <iostream>
#include <bitset>

std::string solve(int N) {
    std::bitset<sizeof(int)*8> bit_sum(0);
    while (N > 0) {
        bit_sum[N % 2];
        N /= 2;
    }
    return bit_sum.to_string().substr(sizeof(int)*8 - 5);
}