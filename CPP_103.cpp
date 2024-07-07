#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg -= 2;
            bin += '1';
        } else if (avg == 1) {
            avg--;
            bin += '1';
        } else {
            bin += '0';
        }
    }
    return bin;
}