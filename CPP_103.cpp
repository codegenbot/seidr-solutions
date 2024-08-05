#include <string>
#include <cassert>

std::string calculate_binary_avg(int a, int b) {
    int avg = (a + b) / 2;
    return std::bitset<8>(avg).to_string();
}

std::string rounded_avg(int a, int b) {
    std::string binary = calculate_binary_avg(a, b);
    return binary.substr(0, 3) + '0';
}

int main() {
    std::string binary_avg = calculate_binary_avg(5, 5);
    assert(rounded_avg(5, 5) == "101");
    return 0;
}