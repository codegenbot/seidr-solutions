#include <iostream>
#include <string>
#include <cassert>

std::string calculateBinary(int a, int b){
    int avg = (a + b) / 2;
    return std::bitset<8>(avg).to_string();
}

int main() {
    std::string binary = calculateBinary(5, 5);
    int rounded_avg = std::stoi(binary, 0, 2);
    assert(rounded_avg == 5);
}