#include <iostream>
#include <bitset>
#include <cmath>
#include <cstddef>
#include <cassert>

using namespace std;

string average_binary(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round((double)sum / (m - n + 1));
    string binaryAvg = bitset<32>(avg).to_string();
    size_t pos = binaryAvg.find('1');
    return (pos != std::string::npos) ? binaryAvg.substr(pos) : "0";
}

int main() {
    assert (average_binary(5, 5) == "101");

    return 0;
}