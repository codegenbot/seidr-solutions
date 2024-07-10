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
    string bin = to_string(avg);
    while (bin.length() < 3) bin = "0" + bin;
    bin[0] = '1';
    return bin;
}