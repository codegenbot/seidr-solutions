#include <string>
#include <assert.h>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int average = round(sum / count);
    
    std::string binary = "";
    
    while (average > 0) {
        binary = std::to_string(average % 2) + binary;
        average /= 2;
    }
    
    return binary;
}

int main() {
    assert (rounded_avg(5, 5) == "101");
    
    return 0;
}