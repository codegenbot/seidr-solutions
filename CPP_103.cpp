#include <cmath>
#include <string>

std::string rounded_average(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round(static_cast<double>(sum) / (m - n + 1));
    std::string binary_avg = std::bitset<32>(avg).to_string();
    
    return binary_avg.substr(binary_avg.find('1'));
}