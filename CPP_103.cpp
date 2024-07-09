#include <string>
#include <bitset>
#include <cassert>

std::string calculateBinary(int a, int b) {
    return std::bitset<std::numeric_limits<int>::digits>(a + b).to_string();
}

int main() {
    std::string rounded_avg = calculateBinary(5, 5);
    assert(rounded_avg == "101");
}