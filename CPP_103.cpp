#include <string>
#include <cassert>
#include <bitset>

std::string calculateBinary(int a, int b) {
    int avg = (a + b) / 2;
    std::string binary_avg = std::bitset<32>(avg).to_string();
    return binary_avg.substr(binary_avg.find('1'));
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), nullptr, 2);
    assert(std::to_string(rounded_avg) == "101");
}