#include <string>
#include <iostream>
#include <cassert>

std::string solve(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round(static_cast<double>(sum) / (m - n + 1));
    
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
    std::string rounded_avg = solve(n, m);
    assert(rounded_avg == solve(n, m));
    std::cout << rounded_avg << std::endl;
    return 0;
}