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

    int avg = round(sum / static_cast<double>(m - n + 1));
    string binary_avg = bitset<32>(avg).to_string();
    size_t first_one = binary_avg.find('1');
    return binary_avg.substr(first_one);
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    return 0;
}