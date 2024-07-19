#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string binary = to_string(avg);
    while(binary.size() < (m - n + 1)) binary = "0" + binary;
    return binary;
}