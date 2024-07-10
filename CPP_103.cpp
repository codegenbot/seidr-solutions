#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string average_binary(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = static_cast<int>((double)sum / (m - n + 1) + 0.5);
    
    string binary_avg = "";
    while (avg > 0) {
        binary_avg = to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}

int main() {
    assert(average_binary(5, 5) == "101");
        
    return 0;
}