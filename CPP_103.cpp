#include <string>
#include <cassert>

std::string calculateBinary(int num1, int num2) {
    int avg = (num1 + num2) / 2;
    std::string binary_avg = std::bitset<8>(avg).to_string(); // 8-bit binary representation
    return binary_avg;
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), 0, 2);
    assert(rounded_avg == 5);
}