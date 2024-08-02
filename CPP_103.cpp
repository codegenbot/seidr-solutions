#include <cmath>
#include <bitset>
#include <cassert>
#include <string>

int avg(int n, int m) {
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round(static_cast<double>(sum) / (m - n + 1));
    
    return avg;
}

int main() {
    assert(avg(5, 5) == 5);
    return 0;
}