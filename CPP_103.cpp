#include <string>
#include <cassert>

std::string calculate_binary_avg(int a, int b) {
    int avg = (a + b) / 2;
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    return binary_avg;
}

std::string rounded_avg(int a, int b) {
    return std::to_string((a + b) / 2);
}

int main() {
    std::string binary_avg = calculate_binary_avg(5, 5);
    assert(rounded_avg(5, 5) == "5");
    return 0;
}