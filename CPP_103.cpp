#include <string>

std::string calculate_binary_avg(int num1, int num2) {
    int average = (num1 + num2) / 2;
    std::string binary_avg = std::bitset<sizeof(average) * CHAR_BIT>(average).to_string();
    return binary_avg;
}

int main() {
    std::string rounded_avg = calculate_binary_avg(5, 5);
}