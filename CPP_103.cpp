#include <cassert>
#include <cmath>
#include <bitset>
#include <string>

std::string avg(int n, int m) {
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int rounded_avg = round((double)sum / (m - n + 1));

    return std::bitset<sizeof(int)*8>(rounded_avg).to_string();
}

int main() {
    assert(avg(5, 5) == "101");
    return 0;
}