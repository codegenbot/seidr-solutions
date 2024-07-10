#include <string>
#include <iostream>
#include <cmath>
#include <cassert>

std::string solve(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    std::string binary = "";
    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << solve(n, m) << std::endl;
    
    assert(solve(5, 5) == "101");
    
    return 0;
}