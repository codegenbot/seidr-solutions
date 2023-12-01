#include <iostream>
#include <bitset>

std::string solve(int N) {
    int sum = 0;
    std::bitset<32> binary(N);
    for (int i = 0; i < binary.size(); i++) {
        if (binary[i] == 1) {
            sum++;
        }
    }
    return std::bitset<32>(sum).to_string();
}