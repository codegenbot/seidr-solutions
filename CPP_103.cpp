#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    double avg = round(sum / (m - n + 1));
    
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(static_cast<int>(avg) % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}