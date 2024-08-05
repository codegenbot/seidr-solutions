#include <string>
#include <cmath>
#include <cassert>

std::string calculate_binary_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    std::string binary_avg = "";
    while (sum > 0) {
        binary_avg = std::to_string(sum % 2) + binary_avg;
        sum /= 2;
    }
    
    return binary_avg;
}

int main() {
    assert(calculate_binary_avg(5, 5) == "101");
}