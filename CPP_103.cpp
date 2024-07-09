#include <string>
#include <cassert>

std::string calculateBinary(int num1, int num2) {
    int sum = num1 + num2;
    std::string binaryResult = std::bitset<8>(sum).to_string();
    return binaryResult.substr(binaryResult.find('1'));
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), 0, 2);
    assert(rounded_avg == 5);
}