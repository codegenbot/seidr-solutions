#include <string>
#include <cmath>
#include <cassert>

std::string calculateBinary(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    double avg = std::round(static_cast<double>(sum) / (m - n + 1));
    
    std::string binary;
    while (avg > 0) {
        binary = std::to_string(static_cast<int>(avg) % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}

int main() {
    assert(calculateBinary(5, 5) == "101");
    return 0;
}