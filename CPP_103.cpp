#include <string>
#include <bitset>
#include <cassert>

std::string calculate_binary_avg(int a, int b) {
    int avg = (a + b) / 2;
    return std::bitset<sizeof(int)*8>(avg).to_string();
}

int main() {
    std::string binary_avg = calculate_binary_avg(5, 5);
    assert(binary_avg == "00000000000000000000000000000101");
}