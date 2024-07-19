#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round(sum / (double)(m - n + 1));
    
    string bin = "";
    while (avg > 0) {
        bin = (avg & 1) ? "1" + bin : "0" + bin;
        avg /= 2;
    }
    
    return bin;
}