#include <string>
#include <bitset>
#include <cassert>

std::string calculateBinary(int a, int b) {
    return std::bitset<3>(a + b).to_string();
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(2, 1), nullptr, 2);
    assert(rounded_avg == 3);
    assert(calculateBinary(2, 1) == "011");

    return 0;
}