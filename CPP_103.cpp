#include <string>
#include <bitset>
#include <cassert>

std::string calculateBinary(int a, int b) {
    return std::bitset<8>(a + b).to_string();
}

int rounded_avg = std::stoi(calculateBinary(5, 5), nullptr, 2);
assert(rounded_avg == 10);