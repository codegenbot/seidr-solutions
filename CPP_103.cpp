#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = sum / (m - n + 1);
    
    string binaryAvg = "";
    while (avg > 0) {
        binaryAvg = to_string(avg % 2) + binaryAvg;
        avg /= 2;
    }
    
    return binaryAvg;
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    
    return 0;
}