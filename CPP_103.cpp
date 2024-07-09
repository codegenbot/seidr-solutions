#include <iostream>
#include <string>
#include <bitset>
#include <cassert>

std::string calculateBinary(int a, int b) {
    return std::bitset<8>(a + b).to_string();
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), 0, 2);
    assert(rounded_avg == 5);

    return 0;
}