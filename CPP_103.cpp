#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = round((double)sum / (m - n + 1));
    string binary_avg = bitset<32>(avg).to_string();
    size_t pos = binary_avg.find('1');
    if (pos != string::npos) {
        return binary_avg.substr(pos);
    } else {
        return "0";
    }
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    return 0;
}