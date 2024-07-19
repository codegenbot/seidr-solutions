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

    int avg = std::round(sum / static_cast<double>(m - n + 1));
    std::string binary_avg = std::bitset<32>(avg).to_string();
    size_t first_one = binary_avg.find('1');
    return binary_avg.substr(first_one);
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    return 0;
}