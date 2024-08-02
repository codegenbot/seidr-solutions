#include <cassert>
#include <cmath>
#include <string>

std::string avg(int n, int m) {
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    return std::to_string(avg);
}

int main() {
    assert(avg(5, 5) == "101");
    return 0;
}