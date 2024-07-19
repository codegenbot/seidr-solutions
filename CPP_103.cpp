#include <iostream>
#include <cmath> 
#include <cassert> 

using namespace std;

double rounded_avg(int n, int m) {
    if (n > m) return -1.0;
    double sum = 0.0;
    for (int i = n; i <= m; i++) {
        sum += stod(to_string(i));
    }
    double avg = round((sum / (m - n + 1)) * 2) / 2.0;
    return avg;
}

int main() {
    assert(std::abs(rounded_avg(5, 5) - 101.0) < 0.0001);
    return 0;
}