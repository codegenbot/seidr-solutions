#include <iostream>
#include <bitset>

std::string fixed_code(int n, int m) {
    if (n > m) {
        return "-1";
    }
    double sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    int avg = std::round(sum / (m - n + 1));
    std::string binary_avg = std::bitset<32>(avg).to_string();
    return binary_avg.substr(binary_avg.find('1'));
}

int main() {
    assert (fixed_code(5, 5) == "101");
    return 0;
}