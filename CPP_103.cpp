#include <iostream>
#include <bitset>
#include <string>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round(static_cast<double>(sum) / (m - n + 1));
    std::string binaryAvg = std::bitset<32>(avg).to_string();
    size_t pos = binaryAvg.find('1');
    return (pos != std::string::npos) ? binaryAvg.substr(pos) : "0";
}

int main() {
    assert(rounded_avg(5, 5) == "101");
}