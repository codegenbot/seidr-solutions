```cpp
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int rounded_avg(int n, int m) {
    if (n > m) return -1;
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    while(avg > 0.5) {
        avg /= 2;
    }
    return (int)avg;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << std::to_string(rounded_avg(n, m)) << endl;
}