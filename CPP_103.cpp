#include <string>
#include <cassert>
#include <cmath>
#include <iostream>

using namespace std;

string avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}

int main() {
    assert (avg(5, 5) == "101");

    return 0;
}