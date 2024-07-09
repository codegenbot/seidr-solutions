#include <cmath>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round(sum / (m - n + 1));
    string binary = to_string(avg);
    while (binary.length() < log2(abs(avg)) + 1) {
        binary = "0" + binary;
    }
    return binary;
}