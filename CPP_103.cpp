#include <cmath>
#include <bitset>
#include <cassert>

std::string avg(int n, int m) {
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    
    int average = std::round((double)sum / (m - n + 1));
    
    return std::bitset<sizeof(int)*8>(average).to_string().substr(sizeof(int)*8-1-(int)std::log2(average), sizeof(int)*8-1);
}

int main() {
    assert(avg(5, 5) == "101");
    return 0;
}