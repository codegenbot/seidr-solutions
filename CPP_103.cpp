#include <string>
#include <cassert>

std::string solve(int n, int m) {
    assert(n <= m);

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round((double)sum / (m - n + 1));
    
    std::string binary = "";
    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}