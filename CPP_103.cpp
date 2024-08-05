#include <iostream>
#include <string>

std::string calculate_binary_avg(int num1, int num2) {
    int sum = num1 + num2;
    int avg = sum / 2;
    std::string binary_avg = std::bitset<8>(avg).to_string();
    return binary_avg;
}

int main() {
    std::string rounded_avg = calculate_binary_avg(5, 5);
    return 0;
}