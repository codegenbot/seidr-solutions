#include <string>
#include <bitset>
#include <cassert>

int calculateBinary(int a, int b) {
    return std::stoi(std::bitset<3>(a + b).to_string(), nullptr, 2);
}

int main() {
    int rounded_avg = calculateBinary(2, 1);
    assert(rounded_avg == 3);

    return 0;
}