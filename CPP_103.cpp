#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round((double)sum / (m - n + 1));
    
    return std::bitset<sizeof(int)*8>(avg).to_string().substr(1);
}

int main() {
    assert (rounded_avg(5, 5) == "101");
    return 0;
}